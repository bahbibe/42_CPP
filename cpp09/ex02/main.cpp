#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
        {
            std::vector<int> v;
            std::stringstream ss(av[i]);
            int n;
            while (ss >> n)
                v.push_back(n);
            std::sort(v.begin(), v.end());
            for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
                std::cout << *it << " ";
            std::cout << std::endl;
        }

}