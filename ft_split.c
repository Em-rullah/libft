/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:16:14 by emkir             #+#    #+#             */
/*   Updated: 2025/06/08 14:47:22 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	free_memory(char **arr_s)
{
	int	i_arr_s;

	i_arr_s = 0;
	while (arr_s[i_arr_s])
	{
		free(arr_s[i_arr_s]);
		i_arr_s++;
	}
	free(arr_s);
	return ;
}

static int	assign_s(char **arr_s, int counter_s, char const *s, char c)
{
	int	i_s;
	int	i_arr_s;

	i_s = 0;
	i_arr_s = 0;
	while (counter_s)
	{
		if (counter_s == 1 && !ft_strchr(&s[i_s], c))
			arr_s[i_arr_s] = ft_substr(s, i_s, ft_strlen(&s[i_s]));
		else if (counter_s == 1)
			arr_s[i_arr_s] = ft_substr(s, i_s, ft_strlen(&s[i_s]) - 1);
		else
			arr_s[i_arr_s] = ft_substr(s, i_s, ft_strchr(&s[i_s], c) - &s[i_s]);
		if (!arr_s[i_arr_s])
			return (0);
		i_s += ft_strchr(&s[i_s], c) - &s[i_s] + 1;
		i_arr_s++;
		counter_s--;
	}
	arr_s[i_arr_s] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		counter_s;
	int		i_s;
	char	**arr_s;

	counter_s = 1;
	i_s = 0;
	while (ft_strchr(&s[i_s], c))
	{
		if ((size_t)(ft_strchr(&s[i_s], c) - &s[i_s]) != ft_strlen(&s[i_s]) - 1)
			counter_s++;
		i_s += ft_strchr(&s[i_s], c) - &s[i_s] + 1;
	}
	arr_s = (char **)calloc(++counter_s, sizeof(char *));
	if (!arr_s)
		return (0);
	i_s = 0;
	counter_s--;
	if (!assign_s(arr_s, counter_s, s, c))
	{
		free_memory(arr_s);
		return (0);
	}
	return (arr_s);
}
