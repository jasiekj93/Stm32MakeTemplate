# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# Target
target = libBlinkLed-Hal

# Directories
project_dir := ..
make_dir := $(project_dir)/make

# Sources 
cxx_sources =  \
$(wildcard libBlinkLed/Hal/*.cpp) \

# Includes
cxx_includes :=  \
-I. \
-I../libBlinkLed-Application \

# Defines
cxx_defs := \

# Append rest of Makefile from template
include $(make_dir)/HardwareLib.mk
