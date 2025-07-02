/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:23:41 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:29:35 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*new_str;
	int		i;

	size = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (size + 1));
	if (!new_str)
		return (0);
	i = 0;
	while (*s1)
	{
		new_str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		new_str[i] = *s2;
		s2++;
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
