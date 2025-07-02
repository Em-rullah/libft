/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 16:25:05 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:30:06 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s_updated;

	s_updated = (char *)s;
	while (n)
	{
		*s_updated = '\0';
		s_updated++;
		n--;
	}
	return ;
}
