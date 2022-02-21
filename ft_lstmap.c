/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:25:54 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/20 17:54:17 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*templist;
	t_list	*list;

	if (!f && !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		templist = ft_lstnew(f(lst->content));
		if (!templist)
		{
			ft_lstclear(&templist, del);
			return (0);
		}
		ft_lstadd_back(&list, templist);
		lst = lst->next;
	}
	return (list);
}
