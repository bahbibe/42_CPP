#include "Fixed.hpp"

const int Fixed::_fractBits = 8;

//! Defualt Constructor
Fixed::Fixed():_value(0){
   // std::cout << CONSTRUCT << std::endl;
}

//! Destructor
Fixed::~Fixed(){
   // std::cout << DESTRUCT << std::endl;
}

//! Copy constructor
Fixed::Fixed(const Fixed& copy){
    //std::cout << COPY << std::endl;
    this->_value = copy.getRawBits();
}

//! Copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& other){
    // std::cout << ASSIGN << std::endl;
    this->_value = other.getRawBits();
    return *this;
}

//! int constructor
Fixed::Fixed(const int& integer ){
    // std::cout << INTEGER << std::endl;
    this->_value = integer << this->_fractBits;
}

//! float constructor
Fixed::Fixed(const float& floatNb ){
    // std::cout << FLOAT_P << std::endl;
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

//! ostream "<<" operator overload
std::ostream& operator<<(std::ostream& out, Fixed const &obj){
    out << obj.toFloat();
    return out ;
}

//! comparison operators: >, <, >=, <=, == , !=
bool    Fixed::operator==(const Fixed& other) const {
    return (this->_value == other._value) ? true : false;
}

bool    Fixed::operator!=(const Fixed& other) const {
    return (this->_value != other._value) ? true : false;
}

bool    Fixed::operator>(const Fixed& other) const {
    return (this->_value > other._value) ? true : false;
}

bool    Fixed::operator<(const Fixed& other) const {
    return (this->_value < other._value) ? true : false;
}

bool    Fixed::operator>=(const Fixed& other) const {
    return (this->_value >= other._value) ? true : false;
}

bool    Fixed::operator<=(const Fixed& other) const {
    return (this->_value <= other._value) ? true : false;
}

//! arithmetic operators: +, -, *, and /.
Fixed   Fixed::operator+(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->_value + other._value) ;
    return result;
}

Fixed   Fixed::operator-(const Fixed& other) const {
    Fixed result;
    result.setRawBits(this->_value - other._value) ;
    return result;
}

Fixed   Fixed::operator*(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->_value * other._value) >> _fractBits) ;
    return result;
}

Fixed   Fixed::operator/(const Fixed& other) const {
    Fixed result;
    result.setRawBits((this->_value << _fractBits) / other._value) ;
    return result;
}

//!increment/decrement operators
Fixed&   Fixed::operator++(){
    this->_value++ ;
    return *this ;
}

Fixed&   Fixed::operator--(){
    this->_value-- ;
    return *this ;
}

Fixed   Fixed::operator++(int){
    Fixed tmp(*this);
    this->_value++ ;
    return tmp ;
}

Fixed   Fixed::operator--(int){
     Fixed tmp(*this);
    this->_value-- ;
    return tmp ;
}

//! MIN / MAX 
const Fixed& Fixed::min(const Fixed& low, const Fixed& lower) {
    return (lower < low) ? lower : low ;
}

Fixed& Fixed::min( Fixed& low,  Fixed& lower)  {
    return (lower < low) ? lower : low ;
}

const Fixed& Fixed::max(const Fixed& low, const Fixed& lower)  {
    return (low > lower) ? low : lower ;
}

Fixed& Fixed::max( Fixed& low,  Fixed& lower)  {
    return (low > lower) ? low : lower ;
}