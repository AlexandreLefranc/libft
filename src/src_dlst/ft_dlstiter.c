/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 18:04:12 by alefranc          #+#    #+#             */
/*   Updated: 2022/05/04 18:09:37 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstiter(t_dlst *dlst, void (*f)(void *))
{
	dlst = ft_dlstfirst(dlst);
	while (dlst != NULL)
	{
		f(dlst->content);
		dlst = dlst->next;
	}
}
