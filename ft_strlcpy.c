/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:36:50 by emkir             #+#    #+#             */
/*   Updated: 2025/05/31 17:19:46 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	size_src;

	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	while ((size - 1) && *src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (size_src);
}
