/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:37:02 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/17 14:38:02 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*srct;
	unsigned char		*dstt;
	long				templen;

	i = 0;
	templen = len;
	srct = (unsigned char *)src;
	dstt = (unsigned char *)dst;
	if (dst > src)
	{
		while (--templen >= 0)
				dstt[templen] = srct[templen];
		return (dstt);
	}
	else
		return (ft_memcpy(dst, src, len));
}
/*#include <stdio.h>
int main()
{
	char dest[50] = "metehan";
	char *centergillerdenmete;
	//dst = 	tehan
	//src =   metehan
	//yanlış sonuc -> memehan -> memehan -> mememan
	//sonuc 		 -> metetan -> metetan -> memetan
	centergillerdenmete = ft_memmove(dest + 2, dest, 5);
	printf("%s",centergillerdenmete);
}*/
