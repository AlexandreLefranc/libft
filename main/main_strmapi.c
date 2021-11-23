#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

static char	shift1mapi(unsigned int i, char c)
{
	i = 0;
	return (c + 1);
}

int	main()
{
	printf("\033[0;31m");
	printf("============= strmapi ===========\n");
	printf("\033[0m");
	{
		char	*str = ft_strdup("abcd");
		printf("Initial string before function| %s | %p\n", str, str);
		printf("Applying function shift1mapi\n");
		char	*str2 = ft_strmapi(str, &shift1mapi);
		printf("Initial string after function | %s | %p\n", str, str);
		printf("New string | %s | %p\n", str2, str2);
	}
	return (0);
}
