#!/bin/bash
ggc -Wall -pedantc -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
