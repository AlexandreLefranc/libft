#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= isascii ===========\n");
	printf("\033[0m");
	{
		printf("%d : %d\n", isascii(-5), ft_isascii(-5));
		printf("%d : %d\n", isascii('y'), ft_isascii('y'));
		printf("%d : %d\n", isascii(200), ft_isascii(200));
	}
	return (0);
}
