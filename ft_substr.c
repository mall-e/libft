/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:28:49 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/21 16:01:55 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*src;

	i = 0;
	src = (char *)s;
	if (!src)
		return (NULL);
	if (start > ft_strlen(src))
	{
		str = (char *)malloc(1);
		str[0] = '\0';
		return (str);
	}
	if (len > start && len - start > ft_strlen(src))
		len = ft_strlen(s) - start;
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	while (i < len)
		str[i++] = src[start++];
	str[i] = '\0';
	return (str);
}

/*int	main()
{
	char yasintemp[] = "yasintemp";
	printf("%s", ft_substr(yasintemp, 10,10));
}*/
