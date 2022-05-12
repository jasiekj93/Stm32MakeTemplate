# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# Target
target := libBlinkLed-Application

# Directories
project_dir ?= ..
make_dir := $(project_dir)/make
external_lib_dir := $(project_dir)/external

# Sources 
cxx_sources :=  \
$(wildcard libBlinkLed/Application/*.cpp) \

# Includes
cxx_includes := \
-I. \
-I$(project_dir)/libBlinkLed-Core \
-I$(external_lib_dir)/libUtils \

# Defines
cxx_defs := \

# Append rest of Makefile from template
include $(make_dir)/SoftwareLib.mk