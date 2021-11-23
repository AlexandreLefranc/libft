#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= isdigit ===========\n");
	printf("\033[0m");
	{
		printf("%d : %d\n", isdigit('x'), ft_isdigit('x'));
		printf("%d : %d\n", isdigit('X'), ft_isdigit('X'));
		printf("%d : %d\n", isdigit('@'), ft_isdigit('@'));
		printf("%d : %d\n", isdigit('1'), ft_isdigit('1'));
		printf("%d : %d\n", isdigit('0'), ft_isdigit('0'));
		printf("%d : %d\n", isdigit('9'), ft_isdigit('9'));
	}
	return (0);
}
