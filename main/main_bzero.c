#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= bzero ===========\n");
	printf("\033[0m");
	{
		char s[] = "0123456789";
		bzero(s+3, 3);
		for (int i=0; i < 10; i++)
			printf("%d ", s[i]);
		printf("\n");
		char s2[] = "0123456789";
		ft_bzero(s2+3, 3);
		for (int i=0; i < 10; i++)
			printf("%d ", s2[i]);
		printf("\n");
	}
 {
 	printf("\n");
 	char s[] = "0123456789";
 	bzero(s+3, 100);
 	for (int i=0; i < 10; i++) {printf("%d ", s[i]);}
 	printf("\n");
 	char s2[] = "0123456789";
 	ft_bzero(s2+3, 100);
 	for (int i=0; i < 10; i++) {printf("%d ", s2[i]);}
 	printf("\n");

 }
	return (0);
}
