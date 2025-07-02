/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:37:44 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:29:08 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_str_s;
	int		i_str_e;
	char	*str_trimmed;

	i_str_s = 0;
	i_str_e = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (0);
	while (s1[i_str_s] && ft_strchr(set, s1[i_str_s]))
		i_str_s++;
	while (i_str_e > i_str_s && ft_strchr(set, s1[i_str_e]))
		i_str_e--;
	str_trimmed = ft_substr(s1, i_str_s, i_str_e - i_str_s + 1);
	if (!str_trimmed)
		return (0);
	return (str_trimmed);
}
