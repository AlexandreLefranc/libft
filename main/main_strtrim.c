#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;32m");
	printf("============= strtrim ===========\n");
	printf("\033[0m");
	{
		printf("Yo : %s\n", ft_strtrim("Yo", " \n\t"));
		printf("Yo : %s\n", ft_strtrim(" \n\t Yo", " \n\t"));
		printf("Yo : %s\n", ft_strtrim("Yo \n\t\n ", " \n\t"));
		printf("Yo : %s\n", ft_strtrim(" \n\tYo \n\t", " \n\t"));
		printf("Yo yoo yooo yoooo : %s\n", ft_strtrim(" \n\t  Yo yoo yooo yoooo  \t \n ", " \n\t"));
	}
	{
		char *s = ft_strtrim("   xxx   xxx", " x");
		printf(" : %s\n", s);
	}
	return (0);
}
