#include "Array.hpp"
#include <sstream>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
int main(void)
{
    Array<int> intArray(5);
    Array<std::string> stringArray(5);
    std::stringstream ss;

    std::cout << "intArray size: " << intArray.size() << std::endl;
    std::cout << "stringArray size: " << stringArray.size() << std::endl;

    for (int i = 0; i < 5; i++)
    {
        ss << i;
        intArray[i] = i;
        stringArray[i] = ss.str();
        ss.str("");
    }

    for (int i = 0; i < 5; i++)
        std::cout << GREEN "intArray[" RESET << i << "]: " << intArray[i] << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << BLUE "stringArray[" RESET << i << "]: " << stringArray[i] << std::endl;

    try
    {
        std::cout << "intArray[5]: " << intArray[5] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << e.what() << RESET  << std::endl;
    }

    try
    {
        std::cout << "stringArray[5]: " << stringArray[5] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << e.what() << RESET  << std::endl;
    }

    Array<int> intArrayCopy(intArray);
    Array<std::string> stringArrayCopy(stringArray);

    for (int i = 0; i < 5; i++)
        std::cout << GREEN "intArrayCopy[" RESET << i << "]: " << intArrayCopy[i] << std::endl;
    for (int i = 0; i < 5; i++)
        std::cout << BLUE "stringArrayCopy[" RESET << i << "]: " << stringArrayCopy[i] << std::endl;

    try
    {
        std::cout << "intArrayCopy[5]: " << intArrayCopy[5] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << e.what() << RESET  << std::endl;
    }

    try
    {
        std::cout << "stringArrayCopy[5]: " << stringArrayCopy[5] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << RED << e.what() << RESET << std::endl;
    }

    return (0);
}