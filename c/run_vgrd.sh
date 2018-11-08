#!/bin/bash
valgrind -v --log-file=valgrind.log --tool=memcheck --leak-check=full --show-mismatched-frees=yes $1

