#!/bin/bash
wget -O "../101-fake_rand.so" "https://raw.githubusercontent.com/MariaGeorge22/alx-low_level_programming/main/0x18-dynamic_libraries/101-fake_rand.so"
export LD_PRELOAD="$PWD/../101-fake_rand.so"
