#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> v;
    std::list<int> l;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        l.push_back(i);
    }
    try
    {
        std::cout << "easyfind(v, 5): " << easyfind(v, 5) << std::endl;
        std::cout << "easyfind(v, 42): " << easyfind(v, 42) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try
    {
        std::cout << "easyfind(l, 5): " << easyfind(l, 5) << std::endl;
        std::cout << "easyfind(l, 42): " << easyfind(l, 42) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}