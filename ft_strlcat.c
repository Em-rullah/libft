/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 16:59:51 by emkir             #+#    #+#             */
/*   Updated: 2025/06/04 17:31:55 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_s;
	size_t	size_d;

	size_s = ft_strlen(src);
	size_d = ft_strlen((const char *)dst);
	if (size == 0 || size <= size_d)
		return (size + size_s);
	while (*dst)
	{
		size--;
		dst++;
	}
	while ((size - 1) && *src)
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return (size_s + size_d);
}
