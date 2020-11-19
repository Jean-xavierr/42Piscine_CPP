NAME = Weapon

SRC = 	AWeapon.cpp		\
		Character.cpp	\
		Enemy.cpp		\
		PlasmaRifle.cpp	\
		PowerFist.cpp	\
		RadScorpion.cpp	\
		SuperMutant.cpp	\
		main.cpp		\

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
