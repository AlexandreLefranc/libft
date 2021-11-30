/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:56:56 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/28 11:57:29 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	elem;
	t_list	*l;

	if (lst == NULL || *lst == NULL)
		return ;
	l = *lst;
	while (l != NULL)
	{
		elem = *l;
		ft_lstdelone(l, del);
		l = elem.next;
	}
	*lst = NULL;
}

// void ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	**lst2;
// 	t_list	*ltmp;
//
// 	if (lst == NULL || *lst == NULL)
// 		return ;
// 	lst2 = lst;
// 	while (*lst != NULL)
// 	{
// 		ltmp = *lst;
// 		ft_lstdelone(*lst, del);
// 		*lst = ltmp->next;
// 	}
// 	*lst2 = NULL;
// }
