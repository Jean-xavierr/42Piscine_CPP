# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Jeanxavier <Jeanxavier@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 18:08:10 by Jeanxavier        #+#    #+#              #
#    Updated: 2020/11/17 11:29:37 by Jeanxavier       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

SRC = 	main.cpp	\
		Fixed.cpp	\

OBJ = $(SRC:.cpp=.o)

CC = clang++

CPPFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
			rm -rf $(OBJ)

fclean : clean
			rm -rf $(NAME)

re : fclean all
