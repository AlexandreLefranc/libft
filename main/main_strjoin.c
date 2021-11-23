#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strjoin ===========\n");
	printf("\033[0m");
	{
		printf("Oui vas y ouioui : %s\n", ft_strjoin("Oui vas y ", "ouioui"));
		printf("Oui vas y  : %s\n", ft_strjoin("Oui vas y ", ""));
		printf("Oui vas y o : %s\n", ft_strjoin("Oui vas y ", "o"));
		printf("ouioui : %s\n", ft_strjoin("", "ouioui"));
		printf("(null) : %s\n", ft_strjoin(NULL, "ouioui"));
		printf("(null) : %s\n", ft_strjoin(NULL, NULL));
		printf(" : %s\n", ft_strjoin("", ""));
	}
	return (0);
}
