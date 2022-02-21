/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:22:45 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/17 12:39:15 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lenght;
	char	*srct;
	char	*dstt;

	i = 0;
	lenght = 0;
	dstt = (char *)dst;
	srct = (char *)src;
	while (srct[lenght] != '\0')
		lenght++;
	if (dstsize <= 0)
		return (lenght);
	while (srct[i] != '\0' && i + 1 < dstsize)
	{
		dstt[i] = srct[i];
		i++;
	}
	dstt[i] = '\0';
	return (lenght);
}
/*#include<stdio.h>
#include<string.h>
int main(void)
{
	char dst[50] = "asdasd";
	char src[50] = "asdasd";
	printf("%lu\n", ft_strlcpy(dst,src,0));
	printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst,src,0));
	printf("%s\n", dst);
}*/
