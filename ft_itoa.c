/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:03:21 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/19 15:58:06 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char	*s)
{
	int		temp;
	int		len;
	int		i;
	char	*str;

	temp = 0;
	i = 0;
	str = s;
	len = ft_strlen(s) - 1;
	while (i < len)
	{
		temp = s[len];
		s[len] = str[i];
		str[i] = temp;
		len--;
		i++;
	}
	return (str);
}

static int	ayrilacakalan(int temp)
{
	int		index;

	index = 0;
	if (temp < 0)
		temp *= -1;
	while (temp > 0)
	{
		temp = temp / 10;
		index++;
	}
	return (index);
}

static char	*ft_while(int a, char *s)
{
	int	i;
	int	len;

	i = 0;
	len = ayrilacakalan(a);
	if (a < 0)
	{
		a *= -1;
		s[len] = '-';
	}
	while (a > 0)
	{
		s[i] = (a % 10) + 48;
		a = a / 10;
		i++;
	}
	s = ft_strrev(s);
	return (s);
}

char	*ft_itoa(int n)
{
	int		temp;
	int		len;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	temp = n;
	len = ayrilacakalan(temp);
	if (n < 0)
		len = len + 1;
	s = (char *)malloc((sizeof(char) * len) + 1);
	if (!s)
		return (0);
	s[len] = '\0';
	s = ft_while(temp, s);
	return (s);
}

/*int	main(void)
{
	int	yasintemp;

	yasintemp = -500;
	printf("%s", ft_itoa(yasintemp));
}*/
