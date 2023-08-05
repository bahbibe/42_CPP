#pragma once
#include <iostream>
#include <cmath>
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
#define COPY MAGENTA "Copy constructor called" RESET
#define ASSIGN CYAN "Copy assignment constructor called" RESET
#define INTEGER  "Int Constructor calledd" 
#define FLOAT_P  "Float Constructor called" 

class Fixed
{
private:
    int _value;
    static const int _fractBits;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& copy);
    Fixed& operator=( const Fixed& other);
    Fixed(const int& integer);
    Fixed(const float& floatNb);
    void	setRawBits( int const raw ) ;
    int		getRawBits( void ) const;
    int		toInt() const ;
    float   toFloat() const ;
	bool	operator==(const Fixed& other) const;
	bool	operator!=(const Fixed& other) const;
	bool	operator<(const Fixed& other) const;
	bool	operator>(const Fixed& other) const;
	bool	operator<=(const Fixed& other) const;
	bool	operator>=(const Fixed& other) const;
	Fixed	operator+(const Fixed& other) const;
	Fixed	operator-(const Fixed& other) const;
	Fixed	operator*(const Fixed& other) const;
	Fixed	operator/(const Fixed& other) const;
	Fixed&  operator++();
	Fixed   operator++(int);
	Fixed&  operator--();
	Fixed   operator--(int);
	static Fixed& min(Fixed& low, Fixed& lower) ;
	static Fixed& max(Fixed& low, Fixed& lower) ;
	static const Fixed& min(const Fixed& low, const Fixed& lower) ;
	static const Fixed& max(const Fixed& low, const Fixed& lower) ;

};

std::ostream& operator<<(std::ostream& out, Fixed const &obj);