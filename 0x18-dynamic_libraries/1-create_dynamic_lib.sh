#!/bin/bash

# Compiles C source files to form files
gcc -c *.c -fPIC

# Links object files into shared library
gcc *.o -shared -o liball.so
