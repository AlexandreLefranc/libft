#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;33m");
	printf("============= substr ===========\n");
	printf("\033[0m");
	{
		char	s[] = "Hey comment ca va ?";

		char	*p1 = ft_substr(s, 0, 100);
		printf("Hey comment ca va ? : %s\n", p1); free(p1);

		char	*p2 = ft_substr(s, 0, 5);
		printf("Hey c : %s\n", p2); free(p2);

		char	*p3 = ft_substr(s, 4, 7);
		printf("comment : %s\n", p3); free(p3);
	}
	{
		char	*s = ft_substr("tripouille", 100, 1);
		printf(" : %s\n", s); free(s);
	}
	return (0);
}
