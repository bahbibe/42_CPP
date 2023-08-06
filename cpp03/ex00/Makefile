NAME = Clap
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf
SRC = main.cpp ClapTrap.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

run:all
	./$(NAME)
$(NAME):$(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ) $(OUT)
fclean:clean
	$(RM) $(NAME)
re:fclean all