/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:03:27 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/28 04:30:11 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*al_mem;

	if (!nmemb || !size)
	{
		al_mem = malloc(0);
		if (!al_mem)
			return (0);
		return (al_mem);
	}
	if (nmemb * size > 2147483647)
		return (0);
	al_mem = malloc(nmemb * size);
	if (!al_mem)
		return (0);
	ft_bzero(al_mem, nmemb * size);
	return (al_mem);
}
