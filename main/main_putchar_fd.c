#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= putchar_fd ===========\n");
	printf("\033[0m");
	fflush(stdout);
	{
		ft_putchar_fd('x', 1);
		printf("\n");
	}
	return (0);
}
