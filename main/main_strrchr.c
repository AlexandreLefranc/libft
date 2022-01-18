#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= strrchr ===========\n");
	printf("\033[0m");
	{
		char s[] = "Salut a toi";
		char s2[] = "";
		printf("%p : %p\n", strrchr(s, 't'), ft_strrchr(s, 't'));
		printf("%p : %p\n", strrchr(s, 'i'), ft_strrchr(s, 'i'));
		printf("%p : %p\n", strrchr(s, '\0'), ft_strrchr(s, '\0'));
		printf("%p : %p\n", strrchr(s, 'z'), ft_strrchr(s, 'z'));
		printf("%p : %p\n", strrchr(s2, 'z'), ft_strrchr(s2, 'z'));
		printf("%p : %p\n", strrchr(s2, '\0'), ft_strrchr(s2, '\0'));
	}
	return (0);
}
