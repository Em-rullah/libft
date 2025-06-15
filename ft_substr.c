/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:10:13 by emkir             #+#    #+#             */
/*   Updated: 2025/06/15 14:51:03 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_string;
	int		i;

	if (!s || !len)
	{
		s_string = (char *)malloc(1);
		*s_string = '\0';
		return (s_string);
	}
	s_string = (char *)malloc(sizeof(char) * (1 + len));
	if (!s_string)
		return (0);
	i = 0;
	while (len && s[start])
	{
		s_string[i] = s[start];
		start++;
		len--;
		i++;
	}
	s_string[i] = '\0';
	return (s_string);
}
