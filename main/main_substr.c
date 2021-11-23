#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= substr ===========\n");
	printf("\033[0m");
	{
		char	s[] = "Hey comment ca va ?";
		printf("Hey comment ca va ? : %s\n", ft_substr(s, 0, 100));
		printf("Hey c : %s\n", ft_substr(s, 0, 5));
		printf("comment : %s\n", ft_substr(s, 4, 7));
	}
	return (0);
}
