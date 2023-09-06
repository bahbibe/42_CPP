#include "MutantStack.hpp"
#include <list>


int main()
{
    MutantStack<int> mstack;
    std::list<int> list;
    mstack.push(5);
    mstack.push(17);
    std::cout << "TOP " <<  mstack.top() << std::endl;
    mstack.pop();
    std::cout << "SIZE " <<mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    list.push_back(5);
    list.push_back(17);
    list.pop_back();
    std::cout << "SIZE " <<list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::cout << "LIST" << std::endl;
    std::list<int>::iterator itl = list.begin();
    std::list<int>::iterator itle = list.end();
    ++itl;
    --itl;
    while (itl != itle)
    {
        std::cout << *itl << std::endl;
        ++itl;
    }
return 0;

}

