#!/bin/bash
avr-gcc -Os -mmcu=atmega328p -DF_CPU=16000000 -o main.elf main.c
