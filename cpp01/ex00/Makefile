NAME = pony

SRC =	main.cpp	\
		Pony.cpp	\

OBJ = $(SRC:.cpp=.o)

CC = clang++

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean :
			rm -rf $(OBJ)

fclean : clean
			rm -rf $(NAME)

re : fclean all
