/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:05:00 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/12 13:16:06 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setkontrol(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	int		a;
	char	*str;

	i = 0;
	a = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] != '\0' && setkontrol(s1[i], set))
		i++;
	while (len > i && setkontrol(s1[len - 1], set))
		len--;
	str = (char *)malloc(sizeof(char) * ((len - i) + 1));
	if (str == NULL)
		return (NULL);
	while (i < len)
		str[a++] = s1[i++];
	str[a] = '\0';
	return (str);
}

/*int main()
{
	char yasintemp[] = "mete";
	char trim[] = "me";
	printf("%s", ft_strtrim(yasintemp, trim));
}*/
