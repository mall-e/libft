/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:26:52 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/11 16:19:15 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
	}
}

/*int main()
{
	int i = open("yasintemp.txt", O_WRONLY);
	int j = open("tahatemp.txt", O_WRONLY);
	//printf("%d", i);
	//printf("%d", j);
	char yasintemp[] = "yasintemp";
	char tahatemp[] = "b";
	ft_putstr_fd(yasintemp, i);
	ft_putstr_fd(tahatemp, j);
}*/
