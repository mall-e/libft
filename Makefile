# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muyazici <muyazici@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 16:03:25 by muyazici          #+#    #+#              #
#    Updated: 2022/02/20 16:57:25 by muyazici         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")

BNS_SRCS	= ft_lst*.c

OBJS		= $(SRCS:.c=.o)

BNS_OBJS	= $(BNS_SRCS:.c=.o)

FLAGS		= -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

bonus: $(NAME)
	gcc $(FLAGS) $(BNS_SRCS)
	ar rc $(NAME) $(BNS_OBJS)

clean:
	rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re bonus
