/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:40:26 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/18 12:34:54 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
/*int main(void)
{
    int *ip, id;

    ip = (int *) ft_calloc(10, sizeof(int));

    for (id=0; id<10; id++) {
         *(ip+id) = (id+1) * 5;
         printf("%p adresindeki değer: %d\n", (ip+id), *(ip+id));
    }

    free(ip);
}*/
