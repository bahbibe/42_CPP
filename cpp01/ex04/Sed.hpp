#pragma once
#include <iostream>
#include <fstream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define USAGE "Usage:" GREEN "./Sed " YELLOW "[file] " RED "[old_str] " CYAN "[new_str]" RESET
#define IF_ERROR RED "Error opening file " RESET
#define OF_ERROR RED "Error writing file " RESET

void replaceStr(std::string &line, const std::string &s1, const std::string &s2);