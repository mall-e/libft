/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:39:18 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/19 13:57:26 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}

/*#include <string.h>
int main( void )
{
    const char *cp = "Bilgisayar";
    const char cd = 's';

    printf("%c karakterinin bellek adresi: %p\n", cd, memchr(cp, cd, 6));

	printf("%c karakterinin bellek adresi: %p\n", cd, ft_memchr(cp, cd, 6));
    return 0;
}*/
