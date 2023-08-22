NAME = WorldOnFire
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)

.cpp.o:
	@$(CC) $(CPPFLAGS) -c $< -o $@

all:$(NAME)
	
run:all
	@./$(NAME)
	@make -s fclean

$(NAME):$(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean:clean
	@$(RM) $(NAME)

re:fclean all

leaks:all
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) 2>&1 | grep total