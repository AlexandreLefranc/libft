/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 06:55:40 by alefranc          #+#    #+#             */
/*   Updated: 2022/02/10 15:38:28 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtabjoin(char **tab, char *sep)
{
	char	*joined;
	size_t	tot_size;
	size_t	i;

	if (tab == NULL || sep == NULL)
		return (NULL);
	tot_size = ft_strtablen(tab) + (ft_strtabsize(tab) - 1) * ft_strlen(sep);
	joined = ft_calloc(sizeof(*joined), tot_size + 1);
	i = 0;
	while (tab[i] != NULL)
	{
		ft_strlcat(joined, tab[i], tot_size + 1);
		if (tab[i + 1] != NULL)
		{
			ft_strlcat(joined, sep, tot_size + 1);
		}
		i++;
	}
	return (joined);
}
