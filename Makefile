# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsanford <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 13:44:40 by jsanford          #+#    #+#              #
#    Updated: 2018/11/23 14:21:04 by jsanford         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = src/*.c
FILES_O = *.o
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) -c $(SRC) -I./headers
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
