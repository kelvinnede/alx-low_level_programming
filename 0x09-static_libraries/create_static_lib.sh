#!/bin/bash

# Compile all .c files and create a static library liball.a

gcc -c *.c

ar rc liball.a *.o

ranlib liball.a

rm *.o

