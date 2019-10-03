# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/02 18:06:58 by mrouabeh          #+#    #+#              #
#    Updated: 2019/10/03 09:48:28 by mrouabeh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
SRC=$(wildcard *.c)
OBJ= $(SRC:.c=.o)
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^

.o: .c
	gcc -o $@ -c $< $(FLAGS)

clean:
	rm -f *.o

fclean: clean eclean
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean eclean re

exec: main.o $(NAME)
	gcc -o main main.o -L. -lft

eclean:
	rm -f main
