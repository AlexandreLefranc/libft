#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= isalpha ===========\n");
	printf("\033[0m");
	{
		printf("%d : %d\n", isalpha('x'), ft_isalpha('x'));
		printf("%d : %d\n", isalpha('X'), ft_isalpha('X'));
		printf("%d : %d\n", isalpha('@'), ft_isalpha('@'));
		printf("%d : %d\n", isalpha('1'), ft_isalpha('1'));
	}
	return (0);
}
