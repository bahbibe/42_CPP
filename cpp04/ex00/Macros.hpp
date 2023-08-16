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
#define BACK_BLACK "\033[40m"
#define BACK_RED "\033[41m"
#define BACK_GREEN "\033[42m"
#define BACK_YELLOW "\033[43m"
#define BACK_BLUE "\033[44m"
#define BACK_MAGENTA "\033[45m"
#define BACK_CYAN "\033[46m"
#define BACK_WHITE "\033[47m"
#define BACK_RESET "\033[0;30m"
#define ANIMAL BACK_RED "Animal"BACK_RESET RESET
#define CAT BACK_YELLOW "Cat"BACK_RESET RESET
#define DOG BACK_BLUE "Dog"BACK_RESET RESET
#define WRONG BACK_MAGENTA "Wrong animal"BACK_RESET RESET
#define WRONG_CAT BACK_CYAN "Wrong cat"BACK_RESET RESET 
#define DEFAULT GREEN " default constructor" RESET
#define DESCTRUCTOR RED " desctructor" RESET
#define COPY " copy constructor"
#define PARAMETER " parameter constructor"