#!/bin/bash
-c *.c
ar -rcs liball.a *.o
ranlib liball.a
