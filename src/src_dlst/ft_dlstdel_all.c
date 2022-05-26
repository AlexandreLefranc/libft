/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:16:03 by alefranc          #+#    #+#             */
/*   Updated: 2022/05/04 18:49:00 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstdel_all(t_dlst **dlst, void (*del)(void *))
{
	t_dlst	*current;
	t_dlst	*next;

	if (dlst == NULL)
		return ;
	current = ft_dlstfirst(*dlst);
	while (current != NULL)
	{
		next = current->next;
		ft_dlstdel_one(current, del);
		current = next;
	}
}
