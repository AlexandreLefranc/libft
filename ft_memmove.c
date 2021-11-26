/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:16:32 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/24 11:27:44 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t	i;
// 	char	*dst2;
// 	char	*src2;
// 	char	*tmp;
//
// 	if (dest == NULL && src == NULL)
// 		return (dest);
// 	dst2 = (char *)dest;
// 	src2 = (char *)src;
// 	tmp = (void *)malloc(sizeof(*tmp) * n);
// 	if (tmp == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < n)
// 	{
// 		tmp[i] = src2[i];
// 		i++;
// 	}
// 	i = 0;
// 	while (i < n)
// 	{
// 		dst2[i] = tmp[i];
// 		i++;
// 	}
// 	free(tmp);
// 	return (dest);
// }

static void	ft_memmove_frontward(void *dest, const void *src, size_t n)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	dst2 = (char *)dest;
	src2 = (char *)src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
}

static void	ft_memmove_backward(void *dest, const void *src, size_t n)
{
	char	*dst2;
	char	*src2;
	size_t	i;

	dst2 = (char *)dest;
	src2 = (char *)src;
	i = n;
	while (i > 0)
	{
		dst2[i] = src2[i];
		i--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
		return (dest);
	if (dest > src)
		ft_memmove_backward(dest, src, n);
	else
		ft_memmove_frontward(dest, src, n);
	return (dest);
}
