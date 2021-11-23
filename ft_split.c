/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alefranc <alefranc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:52:37 by alefranc          #+#    #+#             */
/*   Updated: 2021/11/23 15:57:05 by alefranc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	fill_tab(char **tab, char const *s, char c, int tab_len)
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
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				len_word++;
			}
			tab[n] = ft_strsub(s, i - len_word, len_word);
			n++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	number_of_words;
	char	**tab;

	number_of_words = countwords(s, c);
	tab = (char **)malloc((number_of_words + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	fill_tab(tab, s, c, number_of_words);
	return (tab);
}
