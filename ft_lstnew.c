/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:26:27 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/17 12:26:27 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lsttemp;

	lsttemp = malloc(sizeof(t_list *));
	if (lsttemp)
	{
		lsttemp -> content = content;
		lsttemp -> next = NULL;
	}
	return (lsttemp);
}

/*int main ()
{
	t_list metetemp;
	char *a;
	a = "metetempercentergil";
	metetemp.content = a;
	printf("%s",(char *)ft_lstnew(metetemp.content));
}*/
