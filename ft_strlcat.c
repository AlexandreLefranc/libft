/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:14:58 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/02 21:15:00 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Pseudo code
If max size == 0
	return src_len
If size is shorter than dest
	it means there is nothing to concatenate
	return src_len + size
If size is bigger then dest
	it means there are things to concatenate
	return src_len + dest_len
while We are not at the end of src AND We didn't exceed size - 1 (-1 because \0)
	copy src after dest
Finish with \0
*/

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	returned;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	returned = src_len;
	i = 0;
	if (size == 0)
		return (returned);
	if (size < dest_len)
		returned = returned + size;
	else
		returned = returned + dest_len;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (returned);
}
