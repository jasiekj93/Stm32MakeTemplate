# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2023
# ------------------------------------------------

# Target
target := testBlinkLed-ApplicationPc32

# Directories
project_dir ?= ../..
make_dir := $(project_dir)/make
external_dir := $(project_dir)/external

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
-I$(external_dir)/libUtils \

library_flags = \
-lBlinkLed-ApplicationPc32 \
-lBlinkLed-CorePc32 \

external_library_flags = \
-lUtilsPc32 \

external_library_paths = \
-L$(external_dir)/libUtils/lib \

# Append rest of Makefile from template
include $(make_dir)/SoftwareTestLib.mk