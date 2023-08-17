NAME = Animal
CC = clang++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=leak 
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

.cpp.o:
	@$(CC) $(CPPFLAGS) -c $< -o $@
all:$(NAME)
	
run:all
	@./$(NAME)
	@make -s clean
$(NAME):$(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
	@$(RM) $(OBJ)
fclean:clean
	@$(RM) $(NAME)
re:fclean all