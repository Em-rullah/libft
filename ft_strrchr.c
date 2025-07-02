/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 17:40:27 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:29:09 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((unsigned char)s[i])
		i++;
	while (!(i < 0))
	{
		if ((unsigned char)c == (unsigned char)s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
