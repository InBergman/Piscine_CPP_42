#include "Fixed.class.hpp"

Fixed::Fixed() : _value(0){
  std::cout << "Default constructor called" << std::endl;
};


Fixed::Fixed(Fixed const & val) {
  std::cout << "Copy constructor called" << std::endl;
  *this = val;
};


Fixed::~Fixed() {
  std::cout << "Deconstructor called" << std::endl;
};


int Fixed::getRawBits( void ) const {
  std::cout << "getRawBits member function called" << std::endl;
  return(_value);
}


void Fixed::setRawBits( int const raw ) {
 this->_value = raw;
}


Fixed & Fixed::operator=(Fixed const & num){
  this->_value = num.getRawBits();
  std::cout << "Assignation operator called" << std::endl;

  return *this;
};
