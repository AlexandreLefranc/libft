/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstfirst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:17:33 by alefranc          #+#    #+#             */
/*   Updated: 2022/04/22 16:04:52 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlstfirst(t_dlst *dlst)
{
	if (dlst == NULL)
		return (NULL);
	while (dlst->prev != NULL)
		dlst = dlst->prev;
	return (dlst);
}
