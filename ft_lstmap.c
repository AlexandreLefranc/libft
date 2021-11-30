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

static t_list	*ft_lstdup(t_list *lst)
{
	t_list	*lstdup;

	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{

	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *lst2;

	if (lst == NULL)
		return (NULL);
	lst2 = ft_lstdup(lst);
	ft_lstiter()
}
