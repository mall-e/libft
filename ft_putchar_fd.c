/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:25:23 by muyazici          #+#    #+#             */
/*   Updated: 2022/02/09 15:40:16 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int	main(void)
{
	int i = open("yasintemp.txt", O_WRONLY);
	int c = open("yasintemp.txt", O_WRONLY);
	int d = open("tahatemp.txt", O_WRONLY);
	printf("%d",i);
	printf("\n%d",c);
	printf("%d\n",d);
	ft_putchar_fd('a', c);
	ft_putchar_fd('y', c);
}*/
