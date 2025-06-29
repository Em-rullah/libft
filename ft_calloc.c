/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:03:27 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/29 01:16:19 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*al_mem;

	al_mem = malloc(nmemb * size);
	if (!al_mem)
		return (0);
	ft_bzero(al_mem, nmemb * size);
	return (al_mem);
}
