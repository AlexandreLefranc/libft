#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

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
			dest[14] = 'a';
			size_t r = strlcat(dest, "lorem ipsum dolor sit amet", 15);
			printf("%s %i : ", dest, (int)r);
			free(dest);
		}
		{
			char *dest = (char *)malloc(sizeof(char) * 15);
			dest[14] = 'a';
			size_t r = ft_strlcat(dest, "lorem ipsum dolor sit amet", 15);
			printf("%s %i\n", dest, (int)r);
			free(dest);
		}
	}
	// {
	// 	printf("\n");
	// 	char src[100] = "lorem ipsum dolor sit amet";
	// 	char dst1[14] = "a";
	// 	size_t ret = strlcat(dst1, src, 15);
	// 	printf("src = %s | dst = %s | return = %ld\n", src, dst1, ret);
	//
	// 	char dst2[14] = "a";
	// 	size_t ret2 = ft_strlcat(dst2, src, 15);
	// 	printf("src = %s | dst = %s | return = %ld\n", src, dst2, ret2);
	// }

	return (0);
}
