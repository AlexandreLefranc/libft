#include <stdio.h>
#include "libft.h"

// run : crun main_str.c ft_str*.c

int	main()
{
	printf("\n==================\nTests of strlen\n==================\n");
	{
		char s1[] = "abcd";
		char s2[] = "";
		printf("%ld : %ld\n", strlen(s1), ft_strlen(s1));
		printf("%ld : %ld\n", strlen(s2), ft_strlen(s2));
	}
	printf("\n==================\nTests of strdup\n==================\n");
	{
		char s[] = "Bonjour bonsoir !";
		char *dup1 = strdup(s);
		char *dup2 = ft_strdup(s);
		printf("Initial string : %p | %s\n", s, s);
		printf("At %p : %s\n", dup1, dup1); free(dup1);
		printf("At %p : %s\n", dup2, dup2); free(dup2);
	}
	printf("\n==================\nTests of strcpy\n==================\n");
	{
		char src[] = "Hello !";
		char dest1[10];
		char dest2[10];
		printf("%s : %s\n", strcpy(dest1, src), ft_strcpy(dest2, src));		
	}
	{
		char src[] = "";
		char dest1[10];
		char dest2[10];
		printf("%s : %s\n", strcpy(dest1, src), ft_strcpy(dest2, src));		
	}

	printf("\n==================\nTests of strncpy\n==================\n");
	{
		char src[] = "Hello";
		char dst1[] = "Bonjour a tous";
		char dst2[] = "Bonjour a tous";
		printf("%s : %s\n", strncpy(dst1, src, 4), ft_strncpy(dst2, src, 4));
	}
	{
		char src[] = "Hello";
		char dst1[] = "Bonjour a tous";
		char dst2[] = "Bonjour a tous";
		printf("%s : %s\n", strncpy(dst1, src, 12), ft_strncpy(dst2, src, 12));
	}

	printf("\n==================\nTests of strcat\n==================\n");
	printf("\n==================\nTests of strncat\n==================\n");
	printf("\n==================\nTests of strlcat\n==================\n");
	printf("\n==================\nTests of strchr\n==================\n");
	printf("\n==================\nTests of strrchr\n==================\n");
	printf("\n==================\nTests of strstr\n==================\n");
	printf("\n==================\nTests of strnstr\n==================\n");
	printf("\n==================\nTests of strcmp\n==================\n");
	printf("\n==================\nTests of strncmp\n==================\n");
}
