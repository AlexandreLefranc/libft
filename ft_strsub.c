/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:12:24 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/02 21:12:25 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	
	if (len > ft_strlen(s + start - 1))
	{
		ft_putendl_fd("Error in ft_strsub: trying to sub outside of s", 2);
		return (NULL);
	}
	sub = malloc(sizeof(*sub) * (len + 1));
	if (sub == NULL)
		return (NULL);
	ft_strncpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}
