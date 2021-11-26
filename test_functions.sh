#!/bin/bash

make


clang -Wall -Werror -Wextra main/main_split.c -L. -lft
./a.out

# for filename in ./main/main_*.c; do
# 	clang -Wall -Werror -Wextra $filename -L. -lft
# 	./a.out
# 	rm ./a.out
# done

make fclean
