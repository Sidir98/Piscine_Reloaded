# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 21:31:16 by ibouabda          #+#    #+#              #
#    Updated: 2018/11/07 00:06:47 by ibouabda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

INCLUDE = includes/

COMP = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(INCLUDE)
	ar rc $(NAME) $(COMP)
	ranlib $(NAME)
clean:
	/bin/rm -f $(COMP)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
