/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:38:19 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/20 12:29:27 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1temp;
	unsigned char	*s2temp;

	i = 0;
	s1temp = (unsigned char *)s1;
	s2temp = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1temp[i] != s2temp[i])
			return (s1temp[i] - s2temp[i]);
		i++;
	}
	return (0);
}
