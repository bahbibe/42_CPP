#include "PmergeMe.hpp"

void timingVec(clock_t start, clock_t end, std::vector<int> &v)
{
    std::cout << "Time to process a range of " << v.size() << " elements with " GREEN "std::vector " RESET
              << (end - start) / (double)(CLOCKS_PER_SEC / 1000000) << ": us"
              << std::endl;
}

void timingDeq(clock_t start, clock_t end, std::deque<int> &d)
{
    std::cout << "Time to process a range of " << d.size() << " elements with " RED "std::deque " RESET
              << (end - start) / (double)(CLOCKS_PER_SEC / 1000000) << ": us"
              << std::endl;
}

void printContainer(std::vector<int> &v, const std::string &str)
{
    struct winsize w;
    std::stringstream ss;
    if (ioctl(STDOUT_FILENO, TIOCGWINSZ, &w) < 0)
        throw std::runtime_error("Display Error");
    std::cout << str << ": ";
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
        ss << *it << " ";
        if (ss.str().size() > (w.ws_col / 2) * 3 / 2)
        {
            std::cout << "[...]";
            break;
        }
    }
    std::cout << std::endl;
}

bool fillContainers(std::string input, std::vector<int> &v, std::deque<int> &d)
{
    std::stringstream ss(input);
    int i;
    if (ss >> i)
    {
        char remain;
        if ((ss.get(remain) && !std::isdigit(remain)) || i < 0)
            return false;
        v.push_back(i);
        d.push_back(i);
        return true;
    }
    return false;
}

void insertSortVec(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (int i = 1; i < end - begin; i++)
    {
        int j = i;
        while (j > 0 && *(begin + j - 1) > *(begin + j))
        {
            std::iter_swap(begin + j, begin + j - 1);
            j--;
        }
    }
}

void insertSortDeq(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
    for (int i = 1; i < end - begin; i++)
    {
        int j = i;
        while (j > 0 && *(begin + j - 1) > *(begin + j))
        {
            std::iter_swap(begin + j, begin + j - 1);
            j--;
        }
    }
}

void mergeInsertVec(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (end - begin <= 15)
    {
        insertSortVec(begin, end);
        return;
    }
    std::vector<int>::iterator middle = begin + (end - begin) / 2;
    mergeInsertVec(begin, middle);
    mergeInsertVec(middle, end);
    std::inplace_merge(begin, middle, end);
}

void mergeInsertDeq(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
    if (end - begin <= 15)
    {
        insertSortDeq(begin, end);
        return;
    }
    std::deque<int>::iterator middle = begin + (end - begin) / 2;
    mergeInsertDeq(begin, middle);
    mergeInsertDeq(middle, end);
    std::inplace_merge(begin, middle, end);
}
