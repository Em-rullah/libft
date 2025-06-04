/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:03:27 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/04 18:39:42 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*al_mem;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size > 2147483647)
		return (0);
	al_mem = malloc(nmemb * size);
	if (!al_mem)
		return (malloc(0));
	ft_bzero(al_mem, nmemb * size);
	return (al_mem);
}
