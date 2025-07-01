/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emrul <emrul@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:27:25 by emkir             #+#    #+#             */
/*   Updated: 2025/07/01 21:52:37 by emrul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recursive_clear(t_list *lst, void (*del)(void*))
{
	if (!(lst->next))
	{
		del(lst->content);
		free(lst);
		return ;
	}
	recursive_clear(lst->next, del);
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del || !*lst)
		return ;
	recursive_clear(*lst, del);
	*lst = 0;
}
