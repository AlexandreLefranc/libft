#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= isalnum ===========\n");
	printf("\033[0m");
	{
		printf("%d : %d\n", isalnum('x'), ft_isalnum('x'));
		printf("%d : %d\n", isalnum('X'), ft_isalnum('X'));
		printf("%d : %d\n", isalnum('@'), ft_isalnum('@'));
		printf("%d : %d\n", isalnum('1'), ft_isalnum('1'));
		printf("%d : %d\n", isalnum('0'), ft_isalnum('0'));
		printf("%d : %d\n", isalnum('9'), ft_isalnum('9'));
	}
	return (0);
}
