NAME = Materia

SRC = 	AMateria.cpp		\
		Character.cpp		\
		Cure.cpp			\
		Ice.cpp				\
		MateriaSource.cpp	\
		main.cpp			\

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
