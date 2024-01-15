#!/bin/bash
wget -P /tmp  https://github.com/MariaGeorge22e/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-fake_rand.so
export LD_PRELOAD=/tmp/libgiga.so
