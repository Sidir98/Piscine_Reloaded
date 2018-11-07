# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 23:33:45 by ibouabda          #+#    #+#              #
#    Updated: 2018/11/07 00:20:27 by ibouabda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec

SRC = ft_display_file.c

OBJ = ft_display_file.o

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc ft_display_file.o -o $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
