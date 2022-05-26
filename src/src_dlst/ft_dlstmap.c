/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:06:39 by alefranc          #+#    #+#             */
/*   Updated: 2022/05/04 18:09:32 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlstmap(t_dlst *dlst, void *(*f)(void *), void (*del)(void *))
{
	t_dlst	*map_dlst;
	t_dlst	*new;

	map_dlst = NULL;
	new = NULL;
	dlst = ft_dlstfirst(dlst);
	while (dlst != NULL)
	{
		new = ft_dlstnew(f(dlst->content));
		if (new == NULL)
		{
			ft_dlstdel_all(&map_dlst, del);
			return (NULL);
		}
		ft_dlstadd_back(&map_dlst, new);
		dlst = dlst->next;
	}
	return (map_dlst);
}
