# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# target
target = BlinkLed

# Directories
project_dir := .
make_dir := $(project_dir)/make

# External libraries
external_names = \
CppUTest \
libUtils \

external_lib_names = \
Utils \

external_lib_dirs = \
libUtils/lib \

# Project libraries
library_names = \
Core \
Application \
Driver \
Hal \

# Sources 
cxx_sources =  \
$(wildcard $(target)/*.cpp) \

# Includes
cxx_includes =  \
-I$(target) \

# Linker script
ldscript = libBlinkLed-Driver/Cube/STM32F722ZETx_FLASH.ld 

# Append rest of Makefile from template
include $(make_dir)/Main.mk