/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 16:52:57 by emrullah          #+#    #+#             */
/*   Updated: 2025/07/02 11:29:12 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	result = ft_strdup(s);
	if (!result)
		return (0);
	while (s[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	return (result);
}
