#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= putnbr_fd ===========\n");
	printf("\033[0m");
	fflush(stdout);
	{
		ft_putnbr_fd(9, 1);
		printf("\n");
		ft_putnbr_fd(-2147483648, 1);
		printf("\n");
		ft_putnbr_fd(2147473647, 1);
		printf("\n");
		ft_putnbr_fd(0, 1);
		printf("\n");
	}
	return (0);
}
