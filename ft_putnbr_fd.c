/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 20:54:00 by marvin            #+#    #+#             */
/*   Updated: 2025/07/02 11:29:45 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	tmp_c;
	long	tmp_n;

	tmp_n = n;
	if (tmp_n < 0)
	{
		ft_putchar_fd('-', fd);
		tmp_n *= -1;
	}
	if (tmp_n / 10 == 0)
	{
		tmp_c = tmp_n + '0';
		ft_putchar_fd(tmp_c, fd);
		return ;
	}
	ft_putnbr_fd(tmp_n / 10, fd);
	tmp_c = tmp_n % 10 + '0';
	ft_putchar_fd(tmp_c, fd);
	return ;
}
