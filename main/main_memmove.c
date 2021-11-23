#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= memmove ===========\n");
	printf("\033[0m");
	{
		char str1[9] = "aabbccdd";
    	printf("cpy : The string: %s\n", str1);
    	memcpy(str1 + 2, str1, 6);
    	printf("cpy : New string: %s (undefined behavior)\n", str1);

		char str2[9] = "aabbccdd";
    	printf("mov : The string: %s\n", str2);
    	memmove(str2 + 2, str2, 6);
    	printf("mov : New string: %s (built-in)\n", str2);
	}
	printf("\n");
	{
		char str1[9] = "aabbccdd";
    	printf("cpy : The string: %s\n", str1);
    	ft_memcpy(str1 + 2, str1, 6);
    	printf("cpy : New string: %s (undefined behavior)\n", str1);

		char str2[9] = "aabbccdd";
    	printf("mov : The string: %s\n", str2);
    	ft_memmove(str2 + 2, str2, 6);
    	printf("mov : New string: %s (home-made)\n", str2);
	}
	return (0);
}
