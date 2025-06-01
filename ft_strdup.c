/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 19:21:31 by emrullah          #+#    #+#             */
/*   Updated: 2025/06/01 19:24:44 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strdup(const char *s)
{
	int		i;
	char	*new_s;

	i = 0;
	while (s[i])
		i++;
	new_s = malloc (sizeof(char) * i);
	while (i)
	{
		*new_s = *s;
		new_s++;
		s++;
		i--;
	}
	*new_s = '\0';
}
