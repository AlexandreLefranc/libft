#!/bin/bash

for filename in ./main/main_*.c; do
	clang -Wall -Werror -Wextra $filename
	./a.out
	rm ./a.out
done
