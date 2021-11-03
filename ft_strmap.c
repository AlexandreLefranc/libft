/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:14:27 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/02 21:14:29 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	size_t	i;

	s2 = ft_strdup(s);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s2[i] != '\0')
	{
		s2[i] = f(s2[i]);
		i++;
	}
	return (s2);
}
