#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Tafara-N/alx-low_level_programming/main/0x18-dynamic_libraries/libmy_test.so
export LD_PRELOAD="$PWD/../libmy_test.so"

