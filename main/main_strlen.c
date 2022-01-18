#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strlen ===========\n");
	printf("\033[0m");
	{
		char s1[] = "abcd";
		char s2[] = "";
		printf("%ld : %ld\n", strlen(s1), ft_strlen(s1));
		printf("%ld : %ld\n", strlen(s2), ft_strlen(s2));
	}
	return (0);
}
