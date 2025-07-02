/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:39:04 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:29:48 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_updated;
	char	*dest_updated;

	if (!dest && !src)
		return (dest);
	src_updated = (char *)src;
	dest_updated = (char *)dest;
	if (dest < src)
		return (ft_memcpy(dest_updated, src_updated, n));
	while (n)
	{
		*(dest_updated + n - 1) = *(src_updated + n - 1);
		n--;
	}
	return (dest);
}
