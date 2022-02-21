/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:32:08 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/19 16:40:30 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		a;

	i = 0;
	a = ft_strlen(s);
	while (i <= a)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

/*int main()
{
	char yasintemp[] = "yasintemp metetemp";
	ft_putstr(strchr(yasintemp, 'x'));
}*/
