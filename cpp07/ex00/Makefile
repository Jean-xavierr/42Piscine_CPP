# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/28 11:23:29 by jereligi          #+#    #+#              #
#    Updated: 2020/10/28 11:23:31 by jereligi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	whatever

SRCS		=	whatever.cpp \
				main.cpp

CC			=	g++

OBJS		=	$(SRCS:.cpp=.o)

CFLAGS		+=	-Wall -Werror -Wextra

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) -o $(NAME) $(CFLAGS) $(OBJS)

clean		:
				rm -rf $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all
