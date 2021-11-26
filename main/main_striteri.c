#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

static void iter(unsigned int i, char *s)
{
	*s += i;
}

int	main()
{
	printf("\033[0;33m");
	printf("============= striteri ===========\n");
	printf("\033[0m");
	{
		char	s[] = "0000000000";
		ft_striteri(s, iter);
		printf("%s : %s\n", "0123456789", s);
	}
	return (0);
}
