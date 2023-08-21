#pragma once

#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define BOLD "\033[1;37m"
#define ITALIC "\033[3m"
#define UNDERLINE "\033[4m"
#define WRONG_CAT ITALIC "Wrong cat" RESET
#define DEFAULT GREEN " default constructor" RESET
#define DESCTRUCTOR RED " desctructor" RESET
#define COPY CYAN " copy constructor" RESET
#define PARAMETER YELLOW" parameter constructor" RESET
#define ANIMAL BOLD "Animal" RESET
#define CAT "Cat" RESET
#define DOG "Dog" RESET
#define WRONG ITALIC "Wrong animal" RESET
#define BRAIN "Brain" RESET