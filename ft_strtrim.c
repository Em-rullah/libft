/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:37:44 by emkir             #+#    #+#             */
/*   Updated: 2025/06/04 17:22:06 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_str_s;
	int		i_str_e;
	int		i_set;
	char	*str_trimmed;

	i_str_s = 0;
	i_str_e = ft_strlen(s1) - 1;
	i_set = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (set[i_set])
	{
		if (set[i_set] == s1[i_str_s])
		{
			i_str_s++;
			i_set = 0;
			continue ;
		}
		i_set++;
	}
	while (set[i_set])
	{
		if (set[i_set] == s1[i_str_e])
		{
			i_str_s--;
			i_set = 0;
			continue ;
		}
		i_set++;
	}
	str_trimmed = ft_substr(s1, i_str_s, i_str_e - i_str_s);
	if (!str_trimmed)
		return (0);
	return (str_trimmed);
}
