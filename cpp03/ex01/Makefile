NAME = ClapTrap

SRC = 	FragTrap.cpp			\
		ScavTrap.cpp			\
		ScavTrapChallenge.cpp	\
		main.cpp				\

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
