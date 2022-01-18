#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= isprint ===========\n");
	printf("\033[0m");
	{
		printf("%d : %d\n", isprint(20), ft_isprint(20));
		printf("%d : %d\n", isprint(32), ft_isprint(32));
		printf("%d : %d\n", isprint(126), ft_isprint(126));
		printf("%d : %d\n", isprint(127), ft_isprint(127));
	}
	return (0);
}
