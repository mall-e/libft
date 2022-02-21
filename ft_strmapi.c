/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:56:46 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/20 15:12:16 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !(*f))
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*char	ft_printf(unsigned int i, char c)
{
	i = 0;
	c = c - 32;
	return (c);
}

int	main(void)
{
	char	*yasintemp;

	yasintemp = "yasintemp";
	printf("%s", ft_strmapi(yasintemp, &ft_printf));
}*/
