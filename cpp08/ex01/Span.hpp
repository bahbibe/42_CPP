#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
#include <iterator>

class Span
{
private:
    unsigned int _N;
    std::vector<int> _vec;

public:
    Span();
    ~Span();
    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &other);
    void addNumber(int n);
    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    unsigned int shortestSpan();
    unsigned int longestSpan();
};
