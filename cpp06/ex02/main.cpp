#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

int main(void)
{
    Base *base = generate();
    identify(base);
    identify(*base);
    delete base;
    return (0);
}

// class MyClass
// {
// private:
//     int x;

// public:
//     MyClass(int value) : x(value) {}
//     int getX() { return x; }
// };

// class Hack
// {
// public:
//     int x;
// };

// int main() {
    
//   MyClass obj(100);
//   std::cout << obj.getX() << std::endl;
  
//   Hack* hk = reinterpret_cast<Hack*>(&obj);
//   hk->x = 500;
  
//   std::cout << obj.getX() << std::endl; 
  
//   return 0;
// }