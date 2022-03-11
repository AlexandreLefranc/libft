/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_debug.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:46:51 by alefranc          #+#    #+#             */
/*   Updated: 2022/03/11 13:47:18 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_calloc_debug(size_t nmemb, size_t size, char *msg)
{
	void	*ptr;

	if (nmemb * size > 2147483647)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	dprintf(2, "malloc	%p: %s\n", ptr, msg);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
