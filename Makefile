# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsanford <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 13:44:40 by jsanford          #+#    #+#              #
#    Updated: 2018/11/26 14:39:56 by jsanford         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = *.c
FILES_O = *.o
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) -c $(SRC) -I.
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
