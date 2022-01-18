#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= calloc ===========\n");
	printf("\033[0m");
	{
		void	*ptr1;
		void	*ptr2;

		ptr1 = calloc(0, 0);
		ptr2 = ft_calloc(0, 0);
		printf("%p : %p (should be valid pointer)\n", ptr1, ptr2);
	}
	{
		char	*ptr1;
		char	*ptr2;

		ptr1 = (char *)calloc(10, 1);
		ptr2 = (char *)ft_calloc(10, 1);
		printf("%p : %p (should be valid pointer)\n", ptr1, ptr2);
		for (int i=0; i < 10; i++)
			printf("%d ", ptr1[i]);
		printf(": ");
		for (int i=0; i < 10; i++)
			printf("%d ", ptr2[i]);
		printf("\n");
	}
	return (0);
}
