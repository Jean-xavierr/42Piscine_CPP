NAME = ClapTrap

SRC = 	ClapTrap.cpp			\
		FragTrap.cpp			\
		ScavTrap.cpp			\
		ScavTrapChallenge.cpp	\
		NinjaTrap.cpp			\
		SuperTrap.cpp			\
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
