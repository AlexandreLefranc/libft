#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= toupper ===========\n");
	printf("\033[0m");
	{
		printf("%c : %c\n", toupper('e'), ft_toupper('e'));
		printf("%c : %c\n", toupper('A'), ft_toupper('A'));
		printf("%c : %c\n", toupper('a'), ft_toupper('a'));
		printf("%c : %c\n", toupper('@'), ft_toupper('@'));
		printf("%c : %c\n", toupper('1'), ft_toupper('1'));
	}
	return (0);
}
