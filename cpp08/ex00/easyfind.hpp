#pragma once
#include <iostream>
#include <algorithm>

template <typename T>
int easyfind(T &c,const int n)
{
    typename T::iterator it = std::find(c.begin(), c.end(), n);
    return (it == c.end()) ? throw std::runtime_error("Not found") : *it;
}
