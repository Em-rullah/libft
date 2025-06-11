/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 18:09:08 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/10 17:14:59 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;

	if (*little == '\0')
		return ((char *)big);
	while (len && *big)
	{
		i = 0;
		if (*little == *big)
		{
			while (len != 0 && little[i] && big[i] && little[i] == big[i])
			{
				len--;
				i++;
			}
			if (!little[i])
				return ((char *)big);
			else
				len = len + i;
		}
		big++;
		len--;
	}
	return (0);
}
