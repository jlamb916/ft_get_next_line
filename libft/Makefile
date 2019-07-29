# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jolam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 22:31:04 by jolam             #+#    #+#              #
#    Updated: 2018/09/07 14:55:10 by jolam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

OBJS = *.o

INCLUDE = libft.h

CC = gcc -c

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -I $(INCLUDE) $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
