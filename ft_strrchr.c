/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:28:58 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/19 16:41:12 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		a;
	char	*str;

	i = 0;
	a = ft_strlen(s);
	str = (char *)s;
	while (i <= a)
	{
		if (s[a] == (unsigned char)c)
			return (&str[a]);
		a--;
	}
	return (0);
}
