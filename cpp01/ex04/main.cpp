#include "Sed.hpp"

void replaceStr(std::string &line, const std::string &s1, const std::string &s2)
{
    if (s1.empty())
        return;
    size_t pos = line.find(s1);
    while (pos != std::string::npos)
    {
        line.erase(pos, s1.length());
        line.insert(pos, s2);
        pos = line.find(s1, pos + s2.length());
    }
}

int main(int ac, char **av)
{
    if (ac != 4 && std::cout << USAGE << std::endl)
        return (EXIT_FAILURE);
    std::string fileName = av[1];
    std::ifstream file(fileName);
    if (file.is_open())
    {
        std::string line;
        getline(file, line, '\0');
        replaceStr(line, av[2], av[3]);
        std::ofstream out(fileName + ".replace");
        if (!out.is_open())
            std::cout << OF_ERROR << std::endl;
        out << line;
    }
    else
        std::cout << IF_ERROR << std::endl;
    return (EXIT_SUCCESS);
}
