SRC =	contacts.cpp

OBJ = $(SRC:.cpp=.o)

NAME = lib.a

EXC = contactapp

$(NAME) :	$(SRC:.cpp=.o)
	@g++ -Wall -Werror -Wextra -c $(SRC)
	@ar -rc $(NAME) $(OBJ)
	@g++ -Wall -Werror -Wextra $(OBJ) -o $(EXC)

clean:
	@rm -f $(SRC:.cpp=.o)

fclean:	clean
		@rm -f $(NAME) $(EXC)

re:		fclean all