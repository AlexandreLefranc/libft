#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= memcpy ===========\n");
	printf("\033[0m");
	{
		char src[] = "Salut";
		char dest[] = "Bonjour a toi";
		memcpy(dest, src, 4);
		printf("%s | %s\n", src, dest);
	}
	{
		char src[] = "Salut";
		char dest[] = "Bonjour a toi";
		ft_memcpy(dest, src, 4);
		printf("%s | %s\n", src, dest);
	}
	return (0);
}
