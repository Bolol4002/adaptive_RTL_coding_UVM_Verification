#=============================================================================
# Makefile for Adaptive Control Unit Verification
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
.PHONY: all sim wave clean lint help comp run

all: sim

help:
	@echo ""
	@echo "==========================================================="
	@echo "   Adaptive Control Unit - Makefile Commands"
	@echo "==========================================================="
	@echo ""
	@echo "  make sim    - Build and compile testbench"
	@echo "  make run    - Run simulation"
	@echo "  make wave   - Open GTKWave with waveform"
	@echo "  make clean  - Clean build files"
	@echo "  make help   - Show this help message"
	@echo "  make comp   - Full flow: compile + run + view"
	@echo ""
	@echo "==========================================================="

sim:
	@echo "$(BLUE)Compiling testbench with Verilator...$(NC)"
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

run:
	@echo "$(CYAN)Running simulation...$(NC)"
	@if [ -f $(WORK_DIR)/Vtop_adaptive_control ]; then \
		cd $(WORK_DIR) && ./Vtop_adaptive_control; \
	else \
		echo "$(YELLOW)No binary found. Run 'make sim' first.$(NC)"; \
	fi
	@echo "$(GREEN)Simulation completed!$(NC)"

wave: 
	@echo "$(BLUE)Opening GTKWave...$(NC)"
	@if [ -f $(WORK_DIR)/$(FST_FILE) ]; then \
		gtkwave $(WORK_DIR)/$(FST_FILE); \
	else \
		echo "$(YELLOW)No waveform file found. Run 'make run' first.$(NC)"; \
	fi

comp: sim run wave

clean:
	@echo "$(YELLOW)Cleaning build files...$(NC)"
	@rm -rf $(WORK_DIR)
	@rm -f $(VCD_FILE) $(FST_FILE)
	@echo "$(GREEN)Clean complete!$(NC)"