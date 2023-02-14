# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# This file is only a template and should be included 
# in other Makefile

# Create list of objects to build
objects := $(addprefix $(build_dir)/,$(notdir $(cxx_sources:.cpp=.o)))
objects += $(addprefix $(build_dir)/,$(notdir $(c_sources:.c=.o)))
objects += $(addprefix $(build_dir)/,$(notdir $(asm_sources:.s=.o)))

# Create vpath to search for sourcefiles
vpath %.cpp $(sort $(dir $(cxx_sources)))
vpath %.c $(sort $(dir $(c_sources)))
vpath %.s $(sort $(dir $(asm_sources)))

# build C++ objects
$(build_dir)/%.o: %.cpp Makefile | $(build_dir)
	@echo Compiling $<
	@$(CXX) -c $(CXXFLAGS) $< -o $@

# build C objects
$(build_dir)/%.o: %.c Makefile | $(build_dir)
	@echo Compiling $<
ifeq ($(use_gcc_for_c_files), 1)
	@$(CC) -c $(CFLAGS) $< -o $@
else
	@$(CXX) -c $(CXXFLAGS) $< -o $@
endif

# build ASM objects
$(build_dir)/%.o: %.s Makefile | $(build_dir)
	@echo Compiling $<
	@$(AS) -c $(ASFLAGS) $< -o $@

# build library
$(lib_dir)/$(target).a: $(objects) Makefile | $(lib_dir)
	@echo Creating library $@
	@$(AR) rcs $@ $(objects) 

# build test executable: elf
$(test_dir)/$(target).elf: $(objects) Makefile | $(test_dir)
	@echo Linking $@
	@$(CXX) $(objects) $(LDFLAGS) $(LDLIBS) -o $@
	@$(SZ) $@

# build test executable (hardware): hex
$(test_dir)/%.hex: $(test_dir)/%.elf | $(test_dir)
	@$(HEX) $< $@
	
# build test executable (hardware): bin
$(test_dir)/%.bin: $(test_dir)/%.elf | $(test_dir)
	@$(BIN) $< $@		

# build main executable: elf
$(bin_dir)/$(target).elf: $(objects) Makefile | $(bin_dir)
	@echo Linking $@
	@$(CXX) $(objects) $(LDFLAGS) $(LDLIBS) -o $@
	@$(SZ) $@

# build main executable: hex
$(bin_dir)/%.hex: $(bin_dir)/%.elf | $(bin_dir)
	@$(HEX) $< $@
	
# build main executable: bin
$(bin_dir)/%.bin: $(bin_dir)/%.elf | $(bin_dir)
	@$(BIN) $< $@		

# create directories
$(build_dir):
	@echo Creating directory $@
	@$(MKDIR) $@		

$(lib_dir):
	@echo Creating directory $@
	@$(MKDIR) $@

$(bin_dir):
	@echo Creating directory $@
	@$(MKDIR) $@

$(test_dir):
	@echo Creating directory $@
	@$(MKDIR) $@

# Include autogenerated dependencies as 'make' rules and the end of this file
-include $(wildcard $(build_dir)/*.d)
