NAME = Phonebook
CC = c++ 
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean:
	$(RM) $(OBG)
fclean:clean
	$(RM) $(NAME)
re:fclean all
