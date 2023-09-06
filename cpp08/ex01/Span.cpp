#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span &copy) : _N(copy._N), _vec(copy._vec)
{
}


Span::~Span()
{
}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->_N = other._N;
        this->_vec = other._vec;
    }
    return (*this);
}

void Span::addNumber(int n)
{
    if (n < std::numeric_limits<int>::min() || n > std::numeric_limits<int>::max())
        throw std::overflow_error("Number is out of range ( INT limits )");
    if (this->_N == 0)
        throw std::length_error("No more space to add a number");
    this->_N--;
    this->_vec.push_back(n);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    while (begin != end)
        addNumber(*(begin++));
}

unsigned int Span::shortestSpan()
{
    if (this->_vec.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    std::vector<int>::iterator it = this->_vec.begin();
    std::vector<int>::iterator ite = this->_vec.end();
    std::sort(it, ite);
    int shortSpan = std::numeric_limits<int>::max();
    while (it != ite - 1)
    {
        if (*(it + 1) - *it < shortSpan)
            shortSpan = *(it + 1) - *it;
        it++;
    }
    return (shortSpan);
}

unsigned int Span::longestSpan()
{
    if (this->_vec.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    std::sort(this->_vec.begin(), this->_vec.end());
    return (*(this->_vec.end() - 1) - *(this->_vec.begin()));
}