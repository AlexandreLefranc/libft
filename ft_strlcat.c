/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:14:58 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/28 11:31:41 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	j = size;
	while (*dst)
	{
		dst++;
		if (j > 0)
			j--;
	}
	while (*src && j > 1)
	{
		*dst++ = *src++;
		j--;
	}
	*dst = '\0';
	if (size > dst_len)
		return (dst_len + src_len);
	return (size + src_len);
}
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	slen;

	len = 0;
	slen = ft_strlen(src);
	while (*dst && size > 0)
	{
		dst++;
		len++;
		size--;
	}
	while (*src && size-- > 1)
		*dst++ = *src++;
	if (size == 1 || *src == 0)
		*dst = '\0';
	return (slen + len);
}
*/
