#!/bin/bash
for f in *.c; do gcc -c $f -o ${f%.c}.o; done
ar rcs liball.a *.o
