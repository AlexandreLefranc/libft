#!/bin/bash

make

for filename in ./main/main_*.c; do
	clang -Wall -Werror -Wextra $filename -L. -lft
	./a.out
	rm ./a.out
done
