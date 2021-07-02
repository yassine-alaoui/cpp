SRC = main.cpp

NAME = lib.a

EXC = executable

OBJ = $(SRC:.cpp=.o)

all:	$(NAME)

$(NAME) : $(OBJ)
	@clang++ -Wall -Werror -Wextra -c $(SRC)
	@ar -rc $(NAME) $(OBJ)
	@g++ -Wall -Werror -Wextra $(OBJ) -o $(EXC)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME) $(EXC)

re:		fclean all