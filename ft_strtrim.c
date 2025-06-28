/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 14:37:44 by emkir             #+#    #+#             */
/*   Updated: 2025/06/28 02:06:11 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	find_s(char const *s1, char const *set, int *i_str_s)
{
	int	i_set;

	i_set = 0;
	while (set[i_set])
	{
		if (set[i_set] == s1[*i_str_s])
		{
			*i_str_s = *i_str_s + 1;
			i_set = 0;
			continue ;
		}
		i_set++;
	}
	return ;
}

static void	find_e(char const *s1, char const *set, int *i_str_e)
{
	int	i_set;

	i_set = 0;
	while (set[i_set])
	{
		if (set[i_set] == s1[*i_str_e])
		{
			*i_str_e = *i_str_e - 1;
			i_set = 0;
			continue ;
		}
		i_set++;
	}
	return ;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_str_s;
	int		i_str_e;
	char	*str_trimmed;

	i_str_s = 0;
	i_str_e = ft_strlen(s1) - 1;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	find_s(s1, set, &i_str_s);
	find_e(s1, set, &i_str_e);
	if (i_str_s > i_str_e)
		return (ft_strdup(""));
	str_trimmed = ft_substr(s1, i_str_s, i_str_e - i_str_s + 1);
	if (!str_trimmed)
		return (0);
	return (str_trimmed);
}
