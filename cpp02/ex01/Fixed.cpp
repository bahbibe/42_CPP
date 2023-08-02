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

//! int constructor
Fixed::Fixed(const int& integer ){
    std::cout << "Int Constructor called" << std::endl;
    this->_value = integer << this->_fractBits;
}

//! float constructor
Fixed::Fixed(const float& floatNb ){
    std::cout << "Float Constructor called" << std::endl;
    this->_value = roundf(floatNb * (1 <<  this->_fractBits));
}

int Fixed:: toInt() const{
    return (this->_value >> this->_fractBits) ;
}

float Fixed::toFloat() const{
    return((float)this->_value / (1 << this->_fractBits));
}

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    // std::cout << "getRawBits member function called" << std::endl;
     this->_value = raw ;
}

//! "<<" operator overload
std::ostream& operator<<(std::ostream& out, Fixed const &obj){
    out << obj.toFloat();
    // ? out << obj.toInt();
    // ? out << obj.getRawBits();
    return out ;
}