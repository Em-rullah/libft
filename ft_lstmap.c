/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkir <emkir@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:05:13 by emkir             #+#    #+#             */
/*   Updated: 2025/06/29 04:37:48 by emkir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_next;

	if (!lst || !f)
		return (0);
	new_lst = (t_list *)malloc(sizeof(t_list));
	if (!new_lst)
		return (0);
	new_next = new_lst;
	while (lst)
	{
		new_next->content = f(lst->content);
		if (!lst->next)
			break ;
		new_next->next = (t_list *)malloc(sizeof(t_list));
		if (!(new_next->next))
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		new_next = new_next->next;
		lst = lst->next;
	}
	new_next->next = 0;
	return (new_lst);
}
