#include "../libft.h"
#include <stdio.h>

t_list	*ft_lstdup(t_list *lst);

int	main()
{
	t_list	*l;
	t_list	*ldup;

	l = ft_lstnew(strdup("1"));
	l->next = ft_lstnew(strdup("2"));
	l->next->next = ft_lstnew(strdup("3"));
	ldup = ft_lstdup(l);
	while (l != NULL)
	{
		printf("%s ", (char *)l->content);
		l = l->next;
	}
	printf(": ");
	while (ldup != NULL)
	{
		printf("%s ", (char *)ldup->content);
		ldup = ldup->next;
	}
}
