/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:10:13 by emkir             #+#    #+#             */
/*   Updated: 2025/06/28 02:35:04 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	create_empty(char **s_string)
{
	*s_string = (char *)malloc(1);
	if (!*s_string)
		return ;
	**s_string = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*s_string;
	size_t		i;
	size_t		size;

	if (!s || !len || start >= ft_strlen(s))
	{
		create_empty(&s_string);
		return (s_string);
	}
	size = ft_strlen(s) - start;
	if (size > len)
		size = len;
	s_string = (char *)malloc(sizeof(char) * (size + 1));
	if (!s_string)
		return (0);
	i = 0;
	while (i < size)
	{
		s_string[i] = s[start + i];
		i++;
	}
	s_string[i] = '\0';
	return (s_string);
}
