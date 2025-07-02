/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:06:38 by emkir             #+#    #+#             */
/*   Updated: 2025/07/02 11:29:57 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp_lst;

	if (!new || !lst)
		return ;
	tmp_lst = *lst;
	if (!tmp_lst)
	{
		*lst = new;
		return ;
	}
	while (tmp_lst->next)
	{
		tmp_lst = tmp_lst->next;
	}
	tmp_lst->next = new;
}
