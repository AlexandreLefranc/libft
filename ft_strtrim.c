/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:12:14 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/23 17:04:59 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	char	*ptr1;
	char	*ptr2;
	char	*trimmed;
	int		i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	ptr1 = (char *)s + i;
	while (s[i] != '\0')
	{
		if (!ft_isspace(s[i]))
			ptr2 = (char *)s + i;
		i++;
	}
	trimmed = ft_substr(s, ptr1 - s, ptr2 - ptr1 + 1);
	if (trimmed == NULL)
		return (NULL);
	return (trimmed);
}
