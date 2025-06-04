/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:25:16 by marvin            #+#    #+#             */
/*   Updated: 2025/06/04 17:25:58 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*uns_s1;
	const unsigned char	*uns_s2;

	uns_s1 = (const unsigned char *)s1;
	uns_s2 = (const unsigned char *)s2;
	while (n)
	{
		if (*uns_s1 > *uns_s2)
			return (*uns_s1 - *uns_s2);
		else if (*uns_s1 < *uns_s2)
			return (*uns_s1 - *uns_s2);
		uns_s1++;
		uns_s2++;
		n--;
	}
	return (0);
}
