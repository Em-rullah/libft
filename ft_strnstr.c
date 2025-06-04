/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 18:09:08 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/04 17:35:24 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	i = 0;
	if (!little)
		return ((char *)big);
	while (len && *big)
	{
		if (*little == *big)
		{
			while (little[i] && big[i])
				i++;
			if (!little[i])
				return ((char *)big);
			else
				i = 0;
		}
		big++;
		len--;
	}
	return (0);
}
