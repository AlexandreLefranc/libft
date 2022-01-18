#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <bsd/string.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strlcat ===========\n");
	printf("\033[0m");
	{
		char src[100] = "ABCD";
		char dst1[100] = "1234";
		size_t ret = strlcat(dst1, src, 7);
		printf("%s %ld : ", dst1, ret);

		char dst2[100] = "1234";
		size_t ret2 = ft_strlcat(dst2, src, 7);
		printf("%s %ld\n", dst2, ret2);
	}
	{
		char src[100] = "ABCD";
		char dst1[100] = "1234";
		size_t ret = strlcat(dst1, src, 20);
		printf("%s %ld : ", dst1, ret);

		char dst2[100] = "1234";
		size_t ret2 = ft_strlcat(dst2, src, 20);
		printf("%s %ld\n", dst2, ret2);
	}
	{
		char src[100] = "ABCD";
		char dst1[100] = "1234";
		size_t ret = strlcat(dst1, src, 2);
		printf("%s %ld : ", dst1, ret);

		char dst2[100] = "1234";
		size_t ret2 = ft_strlcat(dst2, src, 2);
		printf("%s %ld\n", dst2, ret2);
	}
	{
		char    s1[4] = "";
		char    s2[4] = "";
		size_t r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
		size_t r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
		printf("%s %i : %s %i\n", s1, (int)r1, s2, (int)r2);
	}
	{
		{
			char *dest = (char *)malloc(sizeof(char) * 15);
			char *dest2 = (char *)malloc(sizeof(char) * 15);
			dest[14] = 'a';
			dest2[14] = 'a';
			size_t r = strlcat(dest, "lorem ipsum dolor sit amet", 15);
			size_t r2 = ft_strlcat(dest2, "lorem ipsum dolor sit amet", 15);
			printf("%s %i : %s %i\n", dest, (int)r, dest2, (int)r2);
		}
	}
	{
		char *dest = (char *)malloc(sizeof(char) * 15);
		char *dest2 = (char *)malloc(sizeof(char) * 15);
		memset(dest, 'r', 15);
		memset(dest2, 'r', 15);
		size_t r = strlcat(dest, "lorem ipsum dolor sit amet", 5);
		size_t r2 = ft_strlcat(dest2, "lorem ipsum dolor sit amet", 5);
		printf("%s %i : %s %i\n", dest, (int)r, dest2, (int)r2);
	}
	return (0);
}
