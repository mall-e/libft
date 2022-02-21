/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:29:56 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/11 14:46:00 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] == str2[i] && (str1[i] != '\0' || str2[i] != '\0'))
		i++;
	if (n <= i)
		return (0);
	else
		return (str1[i] - str2[i]);
}
/*#include <string.h>
int	main(void)
{
	char s1[] = "ü";
	char s2[] = "ç";
	printf("%d\n", strncmp(s1,s2,4));
	printf("%d\n", ft_strncmp(s1,s2,4));
}*/
