/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:40:16 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/01 18:08:43 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		if (((unsigned char *)s)[i] == c)
			return ((void *)(s + 1));
		i++;
		n--;
	}
	return (0);
}
