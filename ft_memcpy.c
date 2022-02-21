/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:37:48 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/17 12:51:43 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*str;
	char		*str2;

	i = 0;
	str = (char *)src;
	str2 = (char *)dst;
	if (!src && !dst)
		return (NULL);
	while (i < n && n != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}
/*int main()
{
	const char src[50] = "metetemp";
	char dest[50] = "metehan";
	printf("%s",ft_memcpy(dest + 2, dest, 3));
}*/
