/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdel_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:16:38 by alefranc          #+#    #+#             */
/*   Updated: 2022/05/04 18:49:11 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstdel_one(t_dlst *dlst, void (*del)(void *))
{
	if (dlst == NULL)
		return ;
	if (del != NULL)
		del(dlst->content);
	free(dlst);
}
