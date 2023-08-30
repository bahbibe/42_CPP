#include "Serializer.hpp"

int main()
{
    Data d("Hello", 1337, "World");
    uintptr_t raw;

    std::cout << "Data &: " << &d << std::endl;
    raw = Serializer::serialize(&d);
    std::cout << GREEN "serialized (raw) : " RESET << raw << std::endl;
    std::cout << BLUE "deserialized (raw): " RESET << Serializer::deserialize(raw) << std::endl;
    std::cout << d << std::endl;
    return 0;
}

