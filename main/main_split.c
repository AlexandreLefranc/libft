#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= split ===========\n");
	printf("\033[0m");
	{
		char s[] = "*salut*les***gens*";
		printf("%s ", s);
		char **tab = ft_split(s, '*');
        int i = 0;
        while (tab[i] != NULL)
        {
            printf("[%s] ", tab[i]);
            free(tab[i]);
            i++;
        }
        free(tab);
        printf("\n");
    }

    {
        char s[] = "salut*les***gens*";
        printf("%s ", s);
        char **tab = ft_split(s, '*');
        int i = 0;
        while (tab[i] != NULL)
        {
            printf("[%s] ", tab[i]);
            free(tab[i]);
            i++;
        }
        free(tab);
        printf("\n");
    }

    {
        char s[] = "*salut*les***gens";
        printf("%s ", s);
        char **tab = ft_split(s, '*');
        int i = 0;
        while (tab[i] != NULL)
        {
            printf("[%s] ", tab[i]);
            free(tab[i]);
            i++;
        }
        free(tab);
        printf("\n");
    }

    {
        char s[] = "***salut*les***gens***pouet****";
        printf("%s ", s);
        char **tab = ft_split(s, '*');
        int i = 0;
        while (tab[i] != NULL)
        {
            printf("[%s] ", tab[i]);
            free(tab[i]);
            i++;
        }
        free(tab);
        printf("\n");
    }
	return (0);
}
