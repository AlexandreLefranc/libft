/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:21:18 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/10 14:10:15 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main()
{
	printf("\n==================\nTests of lstnew\n==================\n");
	{
		int i = 42;
		t_list *l = ft_lstnew(&i, 1);
		printf("%d | %zu | %p\n", *(l->content), l->content_size, l->next);
	}
	printf("\n==================\nTests of lstdelone\n==================\n");
	printf("\n==================\nTests of lstdel\n==================\n");
	printf("\n==================\nTests of lstadd\n==================\n");
	printf("\n==================\nTests of lstiter\n==================\n");
	printf("\n==================\nTests of lstmap\n==================\n");
}
