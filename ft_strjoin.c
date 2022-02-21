/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:31:16 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/11 13:03:26 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	a;
	char	*str1;
	char	*str2;
	char	*dizi;

	i = 0;
	a = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	dizi = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2)));
	if (!dizi)
		return (NULL);
	while (str1[i] != '\0')
	{
		dizi[i] = str1[i];
		i++;
	}
	while (str2[a] != '\0')
		dizi[i++] = str2[a++];
	dizi[i] = '\0';
	return (dizi);
}

/*int main()
{
	char metetemp[] = "metecenter";
	char yasintemp[] = "temp";
	printf("%s", ft_strjoin(metetemp,yasintemp));
}*/
