/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 18:09:08 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/01 18:26:19 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strnstr(const char *big,	const char *little, size_t len)
{
	int	i;

	i = 0;
	if (!little)
		return (big);
	while (len && big)
	{
		if (*little == *big)
		{
			while (little[i] && big[i])
				i++;
			if (!little[i])
				return (big);
			else
				i = 0;
		}
		big++;
		len--;
	}
	return (0);
}
