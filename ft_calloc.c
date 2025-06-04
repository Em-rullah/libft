/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:03:27 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/02 14:05:47 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*al_mem;

	if (!nmemb || !size)
		return (malloc(0));
	al_mem = malloc(nmemb * size);
	if (!al_mem)
		return (malloc(0));
	ft_bzero(al_mem,nmemb * size);
	return (al_mem);
}
