#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;38m");
	printf("============= strlcpy ===========\n");
	printf("\033[0m");
	{
		char	dest[20];
		char	dest2[20];
		char	src[] = "coucou";
		size_t out = strlcpy(dest, src, 0);
		printf("%zu | %s : ", out, dest);
		size_t out2 = ft_strlcpy(dest2, src, 0);
		printf("%zu | %s\n", out2, dest2);
	}
	{
		char	dest[20];
		char	dest2[20];
		char	src[] = "coucou";
		size_t out = strlcpy(dest, src, 4);
		printf("%zu | %s : ", out, dest);
		size_t out2 = ft_strlcpy(dest2, src, 4);
		printf("%zu | %s\n", out2, dest2);
	}
	{
		char	dest[20];
		char	dest2[20];
		char	src[] = "coucou";
		size_t out = strlcpy(dest, src, 12);
		printf("%zu | %s : ", out, dest);
		size_t out2 = ft_strlcpy(dest2, src, 12);
		printf("%zu | %s\n", out2, dest2);
	}
	return (0);
}
