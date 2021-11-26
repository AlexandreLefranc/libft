#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;34m");
	printf("============= itoa ===========\n");
	printf("\033[0m");
	{
		printf("%d : %s\n", 42, ft_itoa(42));
		printf("%d : %s\n", 0, ft_itoa(0));
		printf("%d : %s\n", -42, ft_itoa(-42));
		printf("%d : %s\n", 2147483647, ft_itoa(2147483647));
		printf("%ld : %s\n", -2147483648, ft_itoa(-2147483648));
	}
	return (0);
}
