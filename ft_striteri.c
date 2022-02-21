/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:58:53 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/20 15:12:57 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*void ft_upper(unsigned int i, char *s)
{
	int	c;

	c = 0;
	i = 0;
	while (s[c] != '\0')
	{
		printf("%c\n", s[c]);
		c++;
	}

	s[c] = s[c] - 32;
}

void    f(unsigned int a, char *s)
{
    char *st;
    unsigned int i = 0;
	a = 31;
    st = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    while(*s)
    {
        st[i] = *s;
        i++;
        s++;
    }
    printf("%s\n",st);
}

int	main(void)
{
	char yasintemp[] = "yasintemp";
	ft_striteri(yasintemp, f);
	printf("%s", yasintemp);
}*/
