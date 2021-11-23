#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= atoi ===========\n");
	printf("\033[0m");
	{
		printf("%d : %d\n", atoi("---+--+1234ab567"), ft_atoi("---+--+1234ab567"));
		printf("%d : %d\n", atoi("++1234ab567"), ft_atoi("++1234ab567"));
		printf("%d : %d\n", atoi("1234ab567"), ft_atoi("1234ab567"));
		printf("%d : %d\n", atoi("---1234ab567"), ft_atoi("---1234ab567"));
		printf("%d : %d\n", atoi("-1234ab567"), ft_atoi("-1234ab567"));
		printf("%d : %d\n", atoi("    -1234ab567"), ft_atoi("    -1234ab567"));
		printf("%d : %d\n", atoi("		-1234ab567"), ft_atoi("		-1234ab567"));
		printf("%d : %d\n", atoi("xc1234ab567"), ft_atoi("xc1234ab567"));
		printf("%d : %d\n", atoi("-   1234ab567"), ft_atoi("-   1234ab567"));
		printf("%d : %d\n", atoi("\n-1234ab567"), ft_atoi("\n-1234ab567"));
		printf("%d : %d\n", atoi(" \n\t\v\r\f1234ab567"), ft_atoi(" \n\t\v\r\f1234ab567"));
		printf("%d : %d\n", atoi("-42"), ft_atoi("-42"));
		printf("%d : %d\n", atoi(""), ft_atoi(""));
	}
	return (0);
}
