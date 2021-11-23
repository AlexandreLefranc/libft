#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strtrim ===========\n");
	printf("\033[0m");
	{
		printf("Yo : %s\n", ft_strtrim("Yo"));
		printf("Yo : %s\n", ft_strtrim(" \n\t Yo"));
		printf("Yo : %s\n", ft_strtrim("Yo \n\t\n "));
		printf("Yo : %s\n", ft_strtrim(" \n\tYo \n\t"));
		printf("Yo yoo yooo yoooo : %s\n", ft_strtrim(" \n\t  Yo yoo yooo yoooo  \t \n "));
	}
	return (0);
}
