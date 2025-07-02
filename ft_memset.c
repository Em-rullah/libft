/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:31:07 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:29:47 by emkir            ###   ########.fr       */
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
