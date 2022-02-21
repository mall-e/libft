/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:25:32 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/17 12:25:32 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*templist;

	if (*lst)
	{
		while (*lst)
		{
			templist = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = templist;
		}
	}
}
