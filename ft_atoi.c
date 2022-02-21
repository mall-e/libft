/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:40:54 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/12 13:14:48 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t			i;
	int				eksi;
	unsigned long	sonuc;

	i = 0;
	eksi = 1;
	sonuc = 0;
	while ((str[i] < 14 && str[i] >= 8) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		eksi *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		sonuc = sonuc * 10 + (str[i++] - '0');
		if (sonuc > 2147483647 && eksi == 1)
			return (-1);
		else if (sonuc > 2147483648 && eksi == -1)
			return (0);
	}
	return ((int)(sonuc * eksi));
}
/*
int	main(void)
{
	char yasintemp[] = "       -314385682332423486876- asdas ";
	printf("%d", ft_atoi(yasintemp));
	printf("\n%d", atoi(yasintemp));
}
*/
