/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:31:09 by alefranc          #+#    #+#             */
/*   Updated: 2022/04/22 16:05:22 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_dlstsize_left(t_dlst *dlst)
{
	size_t	count;

	count = 0;
	while (dlst != NULL)
	{
		count++;
		dlst = dlst->prev;
	}
	return (count);
}
