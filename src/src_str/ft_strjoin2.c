/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 11:53:51 by alefranc          #+#    #+#             */
/*   Updated: 2022/01/19 11:54:08 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin2(int nb, ...)
{
	char	*joined;
	char	*joined_prev;
	int		i;
	va_list	args;

	if (nb == 0)
		return (NULL);
	va_start(args, nb);
	joined_prev = ft_strdup("");
	i = 0;
	while (i < nb)
	{
		joined = ft_strjoin(joined_prev, va_arg(args, char *));
		free(joined_prev);
		if (i != nb - 1)
		{
			joined_prev = ft_strdup(joined);
			free(joined);
		}
		i++;
	}
	va_end(args);
	return (joined);
}
