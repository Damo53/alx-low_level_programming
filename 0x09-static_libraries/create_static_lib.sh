#!/bin/bash

gcc -Wall -pedantic -Werror -Wex:xtra -c *.c

ar -rc liball.a *.o

ranlib liball.a

