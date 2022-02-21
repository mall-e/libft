/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:29:36 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/17 11:27:27 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*samanlik;
	char	*igne;
	size_t	a;

	i = 0;
	a = 0;
	samanlik = (char *)haystack;
	igne = (char *)needle;
	if (igne[a] == '\0')
		return (samanlik);
	while (samanlik[i] != '\0' && i < len)
	{
		while (samanlik[i] == igne[a] && i + 1 <= len)
		{
			if (igne[a + 1] == '\0')
				return (&samanlik[i - a]);
			i++;
			a++;
		}
		i = i - a;
		a = 0;
		i++;
	}
	return (0);
}

/*int main()
{
	char yasintemp[] = "taha haksal";
	char needle[] = "";
	size_t max = strlen(yasintemp);
	printf("%s\n", ft_strnstr(yasintemp, needle, max));
	printf("%s", strnstr(yasintemp, needle, max));
}*/
