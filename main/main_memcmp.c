#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	printf("\033[0;32m");
	printf("============= memcmp ===========\n");
	printf("\033[0m");
	{
		printf("builtin : homemade\n");
		char s1[] = "aaaa";
		char s2[] = "aaea";
		printf("%d : %d\n", memcmp(s1, s2, 4), ft_memcmp(s1, s2, 4));
	}
	{
		char s1[] = "aaza";
		char s2[] = "aaaa";
		printf("%d : %d\n", memcmp(s1, s2, 4), ft_memcmp(s1, s2, 4));
	}
	{
		char s1[] = "aaaa";
		char s2[] = "aaaa";
		printf("%d : %d\n", memcmp(s1, s2, 4), ft_memcmp(s1, s2, 4));
	}
	{
		char s1[] = "zaaa";
		char s2[] = "aaaa";
		printf("%d : %d\n", memcmp(s1, s2, 0), ft_memcmp(s1, s2, 0));
	}
	return (0);
}
