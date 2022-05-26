/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize_right.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:31:04 by alefranc          #+#    #+#             */
/*   Updated: 2022/04/22 16:05:30 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_dlstsize_right(t_dlst *dlst)
{
	size_t	count;

	count = 0;
	while (dlst != NULL)
	{
		count++;
		dlst = dlst->next;
	}
	return (count);
}
