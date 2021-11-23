#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strncmp ===========\n");
	printf("\033[0m");
	{
		char s1[] = "Yo";
		char s2[] = "Yoplay";
		printf("%d : %d\n", strncmp(s1, s2, 2), ft_strncmp(s1, s2, 2));
		printf("%d : %d\n", strncmp(s1, s2, 10), ft_strncmp(s1, s2, 10));
		printf("%d : %d\n", strncmp(s1, s1, 2), ft_strncmp(s1, s1, 2));
		printf("%d : %d\n", strncmp(s1, s1, 10), ft_strncmp(s1, s1, 10));
		printf("%d : %d\n", strncmp(s1, "", 0), ft_strncmp(s1, "", 0));
		printf("%d : %d\n", strncmp(s1, "", 1), ft_strncmp(s1, "", 1));
		char s3[] = "abcd";
		char s4[] = "abcD";
		printf("%d : %d\n", strncmp(s3, s4, 3), ft_strncmp(s3, s4, 3));
		printf("%d : %d\n", strncmp(s3, s4, 5), ft_strncmp(s3, s4, 5));
	}
	return (0);
}
