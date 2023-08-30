#include <iostream>

class Data
{
    public:
        std::string s1;
        int n;
        std::string s2;
        Data();
        ~Data();
        Data(std::string s1, int n, std::string s2);
        Data(Data const& src);
        Data& operator=(Data const& rhs);
};

std::ostream& operator<<(std::ostream& os, Data const& data);