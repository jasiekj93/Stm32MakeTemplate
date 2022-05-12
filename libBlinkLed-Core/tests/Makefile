# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# Target
target := testBlinkLed-CorePc32

# Directories
project_dir ?= ../..
make_dir := $(project_dir)/make

# Sources 
cxx_sources :=  \
$(wildcard *.cpp) \

# Includes
cxx_includes :=  \

# Defines
cxx_defs := \

# Libraries
library_includes := \
-I.. \

library_flags := \
-lBlinkLed-CorePc32 \

# Append rest of Makefile from template
include $(make_dir)/SoftwareTestLib.mk