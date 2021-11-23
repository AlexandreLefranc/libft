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

	return (0);
}
