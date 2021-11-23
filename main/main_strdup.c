#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strdup ===========\n");
	printf("\033[0m");
	{
		char s[] = "Bonjour bonsoir !";
		char *dup1 = strdup(s);
		char *dup2 = ft_strdup(s);
		printf("Initial string : %p | %s\n", s, s);
		printf("At %p : %s\n", dup1, dup1); free(dup1);
		printf("At %p : %s\n", dup2, dup2); free(dup2);
	}
	return (0);
}
