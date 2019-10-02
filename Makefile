# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrouabeh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/02 18:06:58 by mrouabeh          #+#    #+#              #
#    Updated: 2019/10/02 19:06:15 by mrouabeh         ###   ########.fr        #
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

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
