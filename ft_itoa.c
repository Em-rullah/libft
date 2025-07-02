/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 14:07:37 by emrullah          #+#    #+#             */
/*   Updated: 2025/07/02 11:29:58 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_m(long n, int sign)
{
	int	digit;

	digit = 1;
	while (!(n / 10 == 0))
	{
		digit++;
		n /= 10;
	}
	if (sign < 0)
		digit++;
	return ((char *)malloc((digit + 1) * sizeof(char)));
}

static void	assign_m(char *str_n, long n, int sign)
{
	int	base;
	int	tmp_n;

	base = 1;
	tmp_n = n;
	while (!(tmp_n / 10 == 0))
	{
		base *= 10;
		tmp_n /= 10;
	}
	if (sign < 0)
	{
		*str_n = '-';
		str_n++;
	}
	while (base)
	{
		*str_n = '0' + n / base;
		n %= base;
		base /= 10;
		str_n++;
	}
	*str_n = '\0';
}

char	*ft_itoa(int n)
{
	char	*str_n;
	long	tmp_n;
	int		sign;

	tmp_n = n;
	sign = 1;
	if (n < 0)
	{
		sign *= -1;
		tmp_n *= -1;
	}
	str_n = create_m(tmp_n, sign);
	if (!str_n)
		return (0);
	assign_m(str_n, tmp_n, sign);
	return (str_n);
}
