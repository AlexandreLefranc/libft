#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= tolower ===========\n");
	printf("\033[0m");
	{
		printf("%c : %c\n", tolower('e'), ft_tolower('e'));
		printf("%c : %c\n", tolower('A'), ft_tolower('A'));
		printf("%c : %c\n", tolower('a'), ft_tolower('a'));
		printf("%c : %c\n", tolower('@'), ft_tolower('@'));
		printf("%c : %c\n", tolower('1'), ft_tolower('1'));
	}
	return (0);
}
