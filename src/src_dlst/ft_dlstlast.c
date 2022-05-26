/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:15:03 by alefranc          #+#    #+#             */
/*   Updated: 2022/04/22 16:05:03 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlst	*ft_dlstlast(t_dlst *dlst)
{
	if (dlst == NULL)
		return (NULL);
	while (dlst->next != NULL)
		dlst = dlst->next;
	return (dlst);
}
