/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:07:14 by alefranc          #+#    #+#             */
/*   Updated: 2022/04/22 16:04:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstadd_back(t_dlst **dlst, t_dlst *new)
{
	t_dlst	*node;

	if (new == NULL || dlst == NULL)
		return ;
	if (*dlst == NULL)
	{
		*dlst = new;
		return ;
	}
	node = ft_dlstlast(*dlst);
	node->next = new;
	new->prev = node;
}
