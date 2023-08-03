#pragma once
#include <iostream>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define CONSTRUCT GREEN "Default Constructor called" RESET
#define DESTRUCT RED "Destructor called" RESET
class Fixed
{
private:
    int _value;
    static const int _fractBits;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& copy);
    Fixed& operator=( const Fixed& );
    int		getRawBits( void ) const;
    void	setRawBits( int const raw ) ;
};
