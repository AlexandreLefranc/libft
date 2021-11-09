/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:52:37 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/08 15:02:27 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static size_t	countwords(char const *s, char c)
{
	size_t	number_of_words;
	size_t	flag_new_word;
	size_t	i;

	flag_new_word = 1;
	number_of_words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			flag_new_word = 1;
		else
		{
			if (flag_new_word)
			{
				number_of_words++;
				flag_new_word = 0;
			}
		}
		i++;
	}
	return (number_of_words);
}

static void	fill_tab(char ***tab, char const *s, char c, int tab_len)
{
	size_t	i;
	size_t	n;
	size_t	len_word;

	tab[tab_len] = NULL;
	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			len_word = 0;
			while (s[i] != c)
			{
				i++;
				len_word++;
			}
			printf("n=%zu | i=%zu | len_word=%zu\n", n, i, len_word);
			(*tab)[n] = ft_strsub(s, i - len_word, len_word);
			n++;
		}
	}
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	number_of_words;
	char	**tab;

	number_of_words = countwords(s, c);
	printf("%zu\n", number_of_words);
	tab = (char **)malloc((number_of_words + 1) * sizeof(**tab));
	printf("%p\n", tab);
	if (tab == NULL)
		return (NULL);
	ft_putendl("Avant fill_tab");
	fill_tab(&tab, s, c, number_of_words);
	ft_putendl("Apres fill_tab");
	return (tab);
}


int	main()
{
	char s[] = "*salut*les***gens*";
	char **tab = ft_strsplit(s, '*');
	int	i = 0;
	while (i < 4)
	{
		printf("%s ", tab[i]);
		i++;
	}
}
