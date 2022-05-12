# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# Target
target = libBlinkLed-Driver

# Directories
project_dir := ..
make_dir := $(project_dir)/make

# Sources 
cxx_sources := \
$(wildcard libBlinkLed/Driver/*.cpp) \

c_sources := \
$(wildcard Cube/Core/Src/*.c) \
$(wildcard Cube/Drivers/STM32F7xx_HAL_Driver/Src/*.c) \

asm_sources := \
Cube/startup_stm32f722xx.s

# Includes
cxx_includes :=  \
-ICube/Core/Inc \
-ICube/Drivers/STM32F7xx_HAL_Driver/Inc \
-ICube/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy \
-ICube/Drivers/CMSIS/Device/ST/STM32F7xx/Include \
-ICube/Drivers/CMSIS/Include

# Defines
cxx_defs := \
-DUSE_HAL_DRIVER \
-DSTM32F722xx

# Append rest of Makefile from template
include $(make_dir)/HardwareLib.mk