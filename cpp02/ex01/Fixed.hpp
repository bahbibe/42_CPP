#pragma once
#include <iostream>

class Fixed
{
private:
    int _value;
    static const int _fBits;
public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed& operator=( const Fixed& );
    ~Fixed();
    int getRawBits( void ) const;
};
