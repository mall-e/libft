/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:22:06 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/19 18:26:01 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	c;
	size_t	sonuc;

	lensrc = 0;
	lendst = 0;
	c = 0;
	while (dst[lendst] != '\0')
		lendst++;
	while (src[lensrc] != '\0')
		lensrc++;
	if (dstsize == 0)
		return (lensrc);
	else if (dstsize < lendst)
		sonuc = lensrc + dstsize;
	else
		sonuc = lensrc + lendst;
	while (src[c] != '\0' && (lendst + c) < (dstsize - 1))
	{
		dst[lendst + c] = src[c];
		c++;
	}
	dst[lendst + c] = '\0';
	return (sonuc);
}
/*#include <string.h>
int main(void)
{
	char yasintemp[20] = "yasintemp";
	char metetemp[20] = "metecentertemp";
	printf("%lu\n", strlcat(yasintemp, metetemp, 15));
	printf("%s\n", yasintemp);
	printf("%lu\n", ft_strlcat(yasintemp, metetemp, 15));
	printf("%s\n----------------------\n", yasintemp);
}*/
