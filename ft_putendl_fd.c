/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:34:58 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/17 12:32:01 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, "\n", 1);
	}
}

/*int	main(void)
{
	int	i = open("yasintemp.txt", O_WRONLY);
	char yasintemp[] = "yasin";
	ft_putendl_fd("yasintemp", i);
	ft_putendl_fd("metecentertemp", i);
	ft_putstr_fd("yasin\n",i);
	ft_putstr_fd("mete\n",i);
	ft_putchar_fd('c', i);
}*/
