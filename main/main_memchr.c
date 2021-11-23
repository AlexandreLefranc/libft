#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= memchr ===========\n");
	printf("\033[0m");
	{
		char s[] = "Bonjour a toi";
		char *p1 = memchr(s, 'a', 15);
		printf("%p\n", s);
		printf("%p (builtin)\n", p1);
		char *p2 = ft_memchr(s, 'a', 15);
		printf("%p (homemade)\n", p2);
	}
	printf("\n");
	{
		char s[] = "Bonjour a toi";
		char *p1 = memchr(s, 'y', 15);
		printf("%p\n", s);
		printf("%p (builtin)\n", p1);
		char *p2 = ft_memchr(s, 'y', 15);
		printf("%p (homemade)\n", p2);
	}
	return (0);
}
