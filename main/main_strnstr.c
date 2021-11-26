#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;32m");
	printf("============= strnstr ===========\n");
	printf("\033[0m");
	{
		const char *large = "Foo Bar Baz";
        const char *small = "Bar";
		printf("%s : %s\n", strnstr(large, small, 4), ft_strnstr(large, small, 4));
		printf("%s : %s\n", strnstr(large, small, 10), ft_strnstr(large, small, 10));
		printf("%s : %s\n", strnstr(large, small, 6), ft_strnstr(large, small, 6));
		printf("%s : %s\n", strnstr(large, small, 7), ft_strnstr(large, small, 7));
		printf("%s : %s\n", strnstr(large, "", 7), ft_strnstr(large, "", 7));
		printf("%s : %s\n", strnstr(large, small, 0), ft_strnstr(large, small, 0));
	}
	{
		char haystack[30] = "aaabcabcd";
		char needle[10] = "aabc";
		printf("%s : %s\n", strnstr(haystack, needle, -1), ft_strnstr(haystack, needle, -1));
	}
	return (0);
}
