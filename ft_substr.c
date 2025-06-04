/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:10:13 by emkir             #+#    #+#             */
/*   Updated: 2025/06/02 14:21:53 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_string;
	int		i;

	s_string = (char *)malloc(sizeof(char) * (1 + len));
	i = 0;
	if (!s_string || !s || !len)
		return (0);
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
