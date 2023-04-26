#!/bin/bash
GCC=riscv32-unknown-elf-gcc
OBJCOPY=riscv32-unknown-elf-objcopy
OBJDUMP=riscv32-unknown-elf-objdump

ELF_NAME=$1
BIN_NAME=`basename $ELF_NAME .bin`
HEX_NAME=`basename $ELF_NAME .hex`
#convert elf to bin
$OBJCOPY -O binary ${ELF_NAME}.riscv ${BIN_NAME}.bin

#convert bin to hex
$OBJCOPY -I binary -O ihex ${BIN_NAME}.bin ${HEX_NAME}.hex

