#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate(void)
{
    srand(time(0));
    int random = rand() % 3;
    if (random == 0)
        return (new A);
    else if (random == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base *p)
{
    (dynamic_cast<A *>(p))   ? std::cout << "A" << std::endl
    : (dynamic_cast<B *>(p)) ? std::cout << "B" << std::endl
    : (dynamic_cast<C *>(p)) ? std::cout << "C" << std::endl
                             : std::cout << "Unknown" << std::endl;
}

void identify(Base &p)
{
    (dynamic_cast<A *>(&p))   ? std::cout << "A" << std::endl
    : (dynamic_cast<B *>(&p)) ? std::cout << "B" << std::endl
    : (dynamic_cast<C *>(&p)) ? std::cout << "C" << std::endl
                              : std::cout << "Unknown" << std::endl;
}
