#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _value;
    static const int _fractBits;
public:
    Fixed();
    Fixed(const Fixed& copy);
    Fixed& operator=( const Fixed& );
    ~Fixed();
    Fixed(const int& integer);
    Fixed(const float& floatNb);
    int toInt() const ;
    float toFloat() const ;
    int getRawBits( void ) const;
    void setRawBits( int const raw ) ;
};
std::ostream& operator<<(std::ostream& out, Fixed const &obj);