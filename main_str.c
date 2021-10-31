#include <stdio.h>
#include <bsd/string.h>
#include "libft.h"

// run : crun -lbsd main_str.c ft_str*.c

int	main()
{
	system("norminette ft_str*.c");
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
	{
		char s[] = "Salut a toi";
		printf("%p : %p\n", strchr(s, 't'), ft_strchr(s, 't'));
		printf("%p : %p\n", strchr(s, 'i'), ft_strchr(s, 'i'));
		printf("%p : %p\n", strchr(s, '\0'), ft_strchr(s, '\0'));
		printf("%p : %p\n", strchr(s, 'z'), ft_strchr(s, 'z'));
	}
	printf("\n==================\nTests of strrchr\n==================\n");
	{
		char s[] = "Salut a toi";
		char s2[] = "";
		printf("%p : %p\n", strrchr(s, 't'), ft_strrchr(s, 't'));
		printf("%p : %p\n", strrchr(s, 'i'), ft_strrchr(s, 'i'));
		printf("%p : %p\n", strrchr(s, '\0'), ft_strrchr(s, '\0'));
		printf("%p : %p\n", strrchr(s, 'z'), ft_strrchr(s, 'z'));
		printf("%p : %p\n", strrchr(s2, 'z'), ft_strrchr(s2, 'z'));
		printf("%p : %p\n", strrchr(s2, '\0'), ft_strrchr(s2, '\0'));
	}
	printf("\n==================\nTests of strstr\n==================\n");
	{
		char s[] = "Salutation mon pote";
		char s2[] = "";
		printf("%s : %s\n", strstr(s, ""), ft_strstr(s, ""));
		printf("%s : %s\n", strstr(s, "mon"), ft_strstr(s, "mon"));
		printf("%s : %s\n", strstr(s, "Hey"), ft_strstr(s, "Hey"));
		printf("%s : %s\n", strstr(s2, "Hey"), ft_strstr(s2, "Hey"));
		printf("%s : %s\n", strstr(s2, ""), ft_strstr(s2, ""));
	}
	printf("\n==================\nTests of strnstr\n==================\n");
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
	printf("\n==================\nTests of strcmp\n==================\n");
	{
		char s1[] = "Yo";
		char s2[] = "Yoplay";
		printf("%d : %d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
		printf("%d : %d\n", strcmp(s1, s1), ft_strcmp(s1, s1));
		printf("%d : %d\n", strcmp(s1, ""), ft_strcmp(s1, ""));
		char s3[] = "abcd";
		char s4[] = "abcD";
		printf("%d : %d\n", strcmp(s3, s4), ft_strcmp(s3, s4));
	}
	printf("\n==================\nTests of strncmp\n==================\n");
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
}
