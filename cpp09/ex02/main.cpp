#include "PmergeMe.hpp"



int main(int argc, char const *argv[])
{
    try
    {
        if (argc == 1)
            throw std::runtime_error("Error");
        std::vector<int> v;
        std::deque<int> d;
        for (int i = 1; i < argc; i++)
            if (!fillContainers(argv[i], v, d))
                throw std::runtime_error("Error");
        printContainer(v, "before");
        clock_t start = clock();
        mergeInsertVec(v.begin(), v.end());
        clock_t end = clock();
        printContainer(v, "after");
        timingVec(start, end, v);
        start = clock();
        mergeInsertDeq(d.begin(), d.end());
        end = clock();
        timingDeq(start, end, d);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}