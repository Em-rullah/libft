/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:21:31 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/04 17:31:09 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*new_s;

	i = 0;
	size = ft_strlen(s);
	new_s = malloc (sizeof(char) * (size + 1));
	if (!new_s)
		return (0);
	while (size)
	{
		new_s[i] = *s;
		s++;
		i++;
		size--;
	}
	new_s[i] = '\0';
	return (new_s);
}
