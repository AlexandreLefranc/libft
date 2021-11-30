#!/bin/bash

make

list="./main/main_*.c"
if [ $# -gt 0 ]
then
	list=
	for f in $@
	do
		list=${list}" ./main/main_$f.c"
	done
fi

for func in $list
do
	# clang -Wall -Werror -Wextra $func -L. -lft -lbsd
	clang -Wall -Werror -Wextra $func -L. -lft
	./a.out
	# valgrind --leak-check=full ./a.out
	rm ./a.out
done

# make clean
