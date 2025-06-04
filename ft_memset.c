/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:31:07 by emkir             #+#    #+#             */
/*   Updated: 2025/06/04 17:26:49 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_updated;

	s_updated = (unsigned char *)s;
	while (n)
	{
		*s_updated = (unsigned char)c;
		s_updated++;
		n--;
	}
	return (s);
}
