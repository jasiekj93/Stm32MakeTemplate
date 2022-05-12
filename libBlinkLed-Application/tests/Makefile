# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2023
# ------------------------------------------------

# Target
terget := testBlinkLed-ApplicationPc32

# Directories
project_dir ?= ../..
make_dir := $(project_dir)/make

# Sources 
cxx_sources :=  \
$(wildcard *.cpp) \

# Includes
cxx_includes := \

# Defines
cxx_defs := \

# Libraries
library_includes = \
-I.. \
-I$(project_dir)/libBlinkLed-Core \

library_flags = \
-lBlinkLed-ApplicationPc32 \
-lBlinkLed-CorePc32 \

# Append rest of Makefile from template
include $(make_dir)/SoftwareTestLib.mk