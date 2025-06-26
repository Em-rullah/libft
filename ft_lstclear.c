/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:27:25 by emkir             #+#    #+#             */
/*   Updated: 2025/06/26 18:58:49 by emkir            ###   ########.fr       */
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
	if (!(*lst))
		return ;
	recursive_clear(*lst, del);
	*lst = 0;
}
