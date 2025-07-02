/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 17:33:00 by emrullah          #+#    #+#             */
/*   Updated: 2025/07/02 11:29:11 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*uns_s1;
	const unsigned char	*uns_s2;

	uns_s1 = (const unsigned char *)s1;
	uns_s2 = (const unsigned char *)s2;
	while (n && (*uns_s1 || *uns_s2))
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
