/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 07:00:36 by alefranc          #+#    #+#             */
/*   Updated: 2022/02/02 07:10:19 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strtablen(char **tab)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (tab[i] != NULL)
	{
		len += ft_strlen(tab[i]);
		i++;
	}
	return (len);
}
