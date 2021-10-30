#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

// run : crun -lbsd main_str.c ft_str*.c

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
	{
		char src[] = "Hello";
		char dst1[20] = "Bonjour !";
		char dst2[20] = "Bonjour !";
		printf("%s : %s\n", strcat(dst1, src), ft_strcat(dst2, src));
	}
	printf("\n==================\nTests of strncat\n==================\n");
	{
		char src[] = "Hello";
		char dst1[20] = "Bonjour !";
		char dst2[20] = "Bonjour !";
		printf("%s : %s\n", strncat(dst1, src, 10), ft_strncat(dst2, src, 10));
	}
	{
		char src[] = "Hello";
		char dst1[20] = "Bonjour !";
		char dst2[20] = "Bonjour !";
		printf("%s : %s\n", strncat(dst1, src, 2), ft_strncat(dst2, src, 2));
	}

	printf("\n==================\nTests of strlcat\n==================\n");
	{
		char src[100] = "ABCD";
		char dst1[100] = "1234";
		size_t ret = strlcat(dst1, src, 7);
		printf("src = %s | dst = %s | return = %ld\n", src, dst1, ret);

		char dst2[100] = "1234";
		size_t ret2 = ft_strlcat(dst2, src, 7);
		printf("src = %s | dst = %s | return = %ld\n", src, dst2, ret2);
	}
	{
		printf("\n");
		char src[100] = "ABCD";
		char dst1[100] = "1234";
		size_t ret = strlcat(dst1, src, 20);
		printf("src = %s | dst = %s | return = %ld\n", src, dst1, ret);

		char dst2[100] = "1234";
		size_t ret2 = ft_strlcat(dst2, src, 20);
		printf("src = %s | dst = %s | return = %ld\n", src, dst2, ret2);
	}
	{
		printf("\n");
		char src[100] = "ABCD";
		char dst1[100] = "1234";
		size_t ret = strlcat(dst1, src, 2);
		printf("src = %s | dst = %s | return = %ld\n", src, dst1, ret);

		char dst2[100] = "1234";
		size_t ret2 = ft_strlcat(dst2, src, 2);
		printf("src = %s | dst = %s | return = %ld\n", src, dst2, ret2);
	}

	printf("\n==================\nTests of strchr\n==================\n");
	printf("\n==================\nTests of strrchr\n==================\n");
	printf("\n==================\nTests of strstr\n==================\n");
	printf("\n==================\nTests of strnstr\n==================\n");
	printf("\n==================\nTests of strcmp\n==================\n");
	printf("\n==================\nTests of strncmp\n==================\n");
}
