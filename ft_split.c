/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:16:14 by emkir             #+#    #+#             */
/*   Updated: 2025/06/29 03:28:45 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calc_word(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

static void	free_words(char **word_arr)
{
	int	i;

	i = 0;
	while (word_arr[i])
	{
		free(word_arr[i]);
		i++;
	}
	free(word_arr);
}

static char	*add_words(char const **s, char c)
{
	char	*tmp;
	int		i_word;

	i_word = 0;
	while (**s == c)
		(*s)++;
	while ((*s)[i_word] != c && (*s)[i_word])
		i_word++;
	tmp = ft_substr(*s, 0, i_word);
	if (!tmp)
		return (0);
	*s = *s + i_word;
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	int		word_i;
	char	**word_arr;
	char	*tmp;

	count = calc_word(s, c);
	word_i = 0;
	word_arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (!word_arr)
		return (0);
	while (count)
	{
		tmp = add_words(&s, c);
		if (!tmp)
		{
			word_arr[word_i] = 0;
			free_words(word_arr);
			return (0);
		}
		word_arr[word_i] = tmp;
		word_i++;
		count--;
	}
	word_arr[word_i] = 0;
	return (word_arr);
}
