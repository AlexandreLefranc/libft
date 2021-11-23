#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

static void	shift1i(unsigned int i, char *s)
{
	s[i] = s[i] + 1;
}

int	main()
{
	printf("\033[0;31m");
	printf("============= striteri ===========\n");
	printf("\033[0m");
	{
		char	*str = ft_strdup("abcd");
		printf("Initial string before function| %s\n", str);
		printf("Applying function shift1i\n");
		ft_striteri(str, &shift1i);
		printf("Initial string after function | %s\n", str);
	}
	return (0);
}
