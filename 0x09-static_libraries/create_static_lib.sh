#!bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar -rc liball.a *.0
ranlib liball.a
