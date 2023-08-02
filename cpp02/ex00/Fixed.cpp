#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

//! Defualt Constructor
Fixed::Fixed():_value(0){
    std::cout << "Default Constructor called" << std::endl;
}

//! Destructor
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

//! Copy constructor
Fixed::Fixed(const Fixed& copy){
    std::cout << "Copy constructor called" << std::endl;
    this->_value = copy.getRawBits();
    // TODO to match exactly the subject's output 
    //? *this = copy ;
}

//! Copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = other.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}
