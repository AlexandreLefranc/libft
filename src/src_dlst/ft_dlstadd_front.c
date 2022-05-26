/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:20:15 by alefranc          #+#    #+#             */
/*   Updated: 2022/04/22 16:04:35 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_front(t_dlst **dlst, t_dlst *new)
{
	t_dlst	*node;

	if (new == NULL || dlst == NULL)
		return ;
	if (*dlst == NULL)
	{
		*dlst = new;
		return ;
	}
	node = ft_dlstfirst(*dlst);
	node->prev = new;
	new->next = node;
}
