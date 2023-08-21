#!/bin/bash

# Downloads dynamic library from GitHub to /tmp directory
wget -P /tmp https://github.com/Lexxyla/alx-low_level_programming/raw/master/0x18-dynamic_libraries/nrandom.so

# Set LD_PRELOAD environment variable to preload the downloaded library
export LD_PRELOAD=/tmp/nrandom.so
