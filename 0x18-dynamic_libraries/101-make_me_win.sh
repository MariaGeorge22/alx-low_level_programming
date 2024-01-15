#!/bin/bash
wget -P "../libgiga.so" "https://github.com/MariaGeorge22/alx-low_level_programming//raw/main/0x18-dynamic_libraries/libgiga.so"
export LD_PRELOAD="~/../libgiga.so"
