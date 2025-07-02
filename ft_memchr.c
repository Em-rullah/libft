/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:40:16 by emrullah          #+#    #+#             */
/*   Updated: 2025/07/02 11:29:50 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		if (((const unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
		n--;
	}
	return (0);
}
