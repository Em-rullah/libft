/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:30:26 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:29:49 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*src_updated;
	char		*dest_updated;

	if (!dest && !src)
		return (0);
	src_updated = (const char *)src;
	dest_updated = (char *)dest;
	while (n)
	{
		*dest_updated = *src_updated;
		dest_updated++;
		src_updated++;
		n--;
	}
	return (dest);
}
