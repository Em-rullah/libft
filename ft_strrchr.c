/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrullah <emrullah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:40:27 by emkir             #+#    #+#             */
/*   Updated: 2025/06/04 17:33:11 by emrullah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((unsigned char)s[i])
		i++;
	while (i)
	{
		if ((unsigned char)c == (unsigned char)s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
