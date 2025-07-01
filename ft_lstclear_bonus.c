/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrul <emrul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:27:25 by emkir             #+#    #+#             */
/*   Updated: 2025/07/01 23:00:43 by emrul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	tmp_lst;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp_lst = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp_lst;
	}
}
