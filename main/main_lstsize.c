#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft.h"

int	main()
{
	printf("\033[0;31m");
	printf("============= lstsize ===========\n");
	printf("\033[0m");
	{
		t_list	*l;
		int		i;

		l = ft_lstnew(strdup("1"));
		l->next = ft_lstnew(strdup("2"));
		l->next->next = ft_lstnew(strdup("3"));
		i = ft_lstsize(l);
		printf("%d : %d\n", 3, i);
	}
	{
		t_list	*l;
		int		i;

		l = NULL;
		i = ft_lstsize(l);
		printf("%d : %d\n", 0, i);
	}
	return (0);
}
