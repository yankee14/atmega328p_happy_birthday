#!/bin/bash
avrdude -D -p atmega328p -P /dev/ttyACM0 -c arduino -b 115200 -U flash:w:main.elf:e
