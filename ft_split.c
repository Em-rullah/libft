/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:16:14 by emkir             #+#    #+#             */
/*   Updated: 2025/06/26 21:19:14 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	calc_word(char const*s, char c)
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

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**word_arr;

	count = calc_word(s, c);
	word_arr = (char **)malloc(sizeof(char *) * count);
	return (word_arr);
}
