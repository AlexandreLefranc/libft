#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

static void print_tab(char *s, int size)
{
	for (int i = 0; i < size; i++)
		printf("%i ", s[i]);
}

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
	printf("\n");
	{
		char s[] = {65, 66, 67, 68, 69, 70, 45};
		char s0[] = { 0,  0,  0,  0,  0,  0, 0, 0};
		printf("%s : %s\n", memmove(s0, s, 7), ft_memmove(s0, s, 7));
		print_tab(memmove(s0, s, 7), 8);
		printf(": ");
		print_tab(ft_memmove(s0, s, 7), 8);
		printf("\n\n");
	}
	{
		char s[] = {65, 66, 67, 68, 69, 70, 45, 0};
		printf("%s : %s\n", memmove(s, s + 2, 4), ft_memmove(s, s + 2, 4));
		print_tab(memmove(s, s + 2, 4), 8);
		printf(": ");
		print_tab(ft_memmove(s, s + 2, 4), 8);
		printf("\n\n");
	}
	{
		char s[] = {65, 66, 67, 68, 69, 70, 45, 0};
		printf("%s : %s\n", memmove(s, s, 4), ft_memmove(s, s, 4));
		print_tab(memmove(s, s, 4), 8);
		printf(": ");
		print_tab(ft_memmove(s, s, 4), 8);
		printf("\n\n");
	}
	{
		char s[] = {65, 66, 67, 68, 69, 70, 45, 0};
		printf("%s : %s\n", memmove(s + 2, s, 4), ft_memmove(s + 2, s, 4));
		print_tab(memmove(s + 2, s, 4), 8);
		printf(": ");
		print_tab(ft_memmove(s + 2, s, 4), 8);
		printf("\n\n");
	}
	{
		char s[] = {67, 68, 67, 68, 69, 0, 45};
		printf("%s : %s\n", memmove(s + 1, s, 2), ft_memmove(s + 1, s, 2));
		print_tab(memmove(s + 1, s, 2), 8);
		printf(": ");
		print_tab(ft_memmove(s + 1, s, 2), 8);
		printf("\n\n");
	}
	return (0);
}
