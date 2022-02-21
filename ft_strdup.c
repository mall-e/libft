/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:31:20 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/11 16:18:33 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*src;
	char	*dst;

	i = 0;
	src = (char *)s1;
	dst = (char *)malloc(ft_strlen(src) + 1);
	if (dst == 0)
		return (NULL);
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*int main( void )
{
    const char *cp1 = "Bilgisayar";
    char *cp2 = ft_strdup(cp1);

    printf("İlk karakter dizisi: %s\n", cp1);
    printf("Benzer olarak oluşturulan karakter dizisi: %s", cp2);

    return 0;
}*/
