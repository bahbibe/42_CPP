NAME = Phonebook
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

run:all
	./$(NAME)
$(NAME):$(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBJ)
fclean:clean
	$(RM) $(NAME)
re:fclean all
