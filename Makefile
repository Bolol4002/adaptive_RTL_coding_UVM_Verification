#=============================================================================
# Makefile for Adaptive Control Unit
# Supports Verilator simulation and GTKWave waveform viewing
#=============================================================================

# Directories
SRC_DIR = src
TB_DIR = tb

# Verilator settings
VERILATOR = verilator

# Output files
WORK_DIR = work
VCD_FILE = waveform.vcd
FST_FILE = waveform.fst

# Colors for output
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
CYAN = \033[0;36m
NC = \033[0m

# Targets
.PHONY: all sim gtk clean help

all: sim run

sim:
	@echo "$(BLUE)Compiling design and testbench with Verilator...$(NC)"
	@mkdir -p $(WORK_DIR)
	$(VERILATOR) -I$(SRC_DIR) -I$(TB_DIR) --cc $(SRC_DIR)/top_adaptive_control.sv \
		$(TB_DIR)/tb_adaptive_verilator.sv \
		--trace --trace-fst --trace-structs \
		--timing \
		--main \
		-Wall \
		-Wno-multitop \
		-Wno-unusedsignal \
		-Wno-unusedparam \
		-Wno-eofnewline \
		-Wno-declfilename \
		--exe \
		-Mdir $(WORK_DIR)
	@cd $(WORK_DIR) && make -f Vtop_adaptive_control.mk -j4
	@echo "$(GREEN)Build complete!$(NC)"

run: sim
	@echo "$(CYAN)Running simulation...$(NC)"
	@cd $(WORK_DIR) && ./Vtop_adaptive_control
	@echo "$(GREEN)Simulation completed!$(NC)"

gtk:
	@echo "$(BLUE)Opening GTKWave...$(NC)"
	@if [ -f $(WORK_DIR)/$(FST_FILE) ]; then \
		gtkwave $(WORK_DIR)/$(FST_FILE); \
	else \
		echo "$(YELLOW)No waveform file found. Run 'make' first.$(NC)"; \
	fi

clean:
	@echo "$(YELLOW)Cleaning build files...$(NC)"
	@rm -rf $(WORK_DIR)
	@echo "$(GREEN)Clean complete!$(NC)"

help:
	@echo ""
	@echo "==========================================================="
	@echo "   Adaptive Control Unit - Makefile Commands"
	@echo "==========================================================="
	@echo ""
	@echo "  make       - Compile and run simulation (default)"
	@echo "  make sim   - Compile design and testbench"
	@echo "  make run   - Run simulation (after sim)"
	@echo "  make gtk   - Open GTKWave with waveform"
	@echo "  make clean - Clean build files"
	@echo "  make help  - Show this help message"
	@echo ""
	@echo "==========================================================="