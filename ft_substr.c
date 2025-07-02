/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:10:13 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:58:22 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*s_string;
	size_t		i;
	size_t		size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (size - start > len)
		size = len;
	else
		size = size - start;
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
