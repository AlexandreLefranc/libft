/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:59:07 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/28 12:00:15 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
// static t_list	*ft_lstdup(t_list *lst, void (*del)(void *))
// {
// 	t_list	*lstdup;
// 	t_list	*newlst;
//
// 	if (lst == NULL)
// 		return (NULL);
// 	lstdup = NULL;
// 	while (lst != NULL)
// 	{
// 		newlst = ft_lstnew(lst->content);
// 		if (newlst == NULL)
// 		{
// 			ft_lstclear(&lstdup, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&lstdup, newlst);
// 		lst = lst->next;
// 	}
// 	return (lstdup);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newelem;

	newlst = NULL;
	while (lst != NULL)
	{
		newelem = ft_lstnew(f(lst->content));
		if (newelem == NULL)
		{
			ft_lstclear(&newlst, del);
			break ;
		}
		ft_lstadd_back(&newlst, newelem);
		lst = lst->next;
	}
	return (newlst);
}

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*lst2;
//
// 	if (lst == NULL)
// 		return (NULL);
// 	lst2 = ft_lstdup(lst, del);
// 	if (lst2 == NULL)
// 		return (NULL);
// 	while (lst2 != NULL)
// 	{
// 		lst2->content = f(lst2->content);
// 		lst2 = lst2->next;
// 	}
// 	ft_lstclear(&lst, del);
// 	return (lst2);
// }
