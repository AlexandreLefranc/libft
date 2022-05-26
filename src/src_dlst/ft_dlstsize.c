/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:24:26 by alefranc          #+#    #+#             */
/*   Updated: 2022/04/22 16:05:42 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_dlstsize(t_dlst *dlst)
{
	size_t	count;
	t_dlst	*node;

	count = 0;
	node = ft_dlstfirst(dlst);
	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
