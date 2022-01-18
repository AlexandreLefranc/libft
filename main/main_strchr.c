#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strchr ===========\n");
	printf("\033[0m");
	{
		char s[] = "Salut a toi";
		printf("%p : %p\n", strchr(s, 't'), ft_strchr(s, 't'));
		printf("%p : %p\n", strchr(s, 'i'), ft_strchr(s, 'i'));
		printf("%p : %p\n", strchr(s, '\0'), ft_strchr(s, '\0'));
		printf("%p : %p\n", strchr(s, 'z'), ft_strchr(s, 'z'));
	}
	return (0);
}
