#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed() : _value(0){
  std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed const & val) {
  std::cout << "Copy constructor called" << std::endl;
  *this = val;
};

Fixed::Fixed(int const & val) {
  std::cout << "Copy constructor called" << std::endl;
  setRawBits(val << _bits);
};

Fixed::Fixed(float const & val) {
  std::cout << "Copy constructor float called " << std::endl;
  setRawBits(roundf(val * (1 << _bits)));
};

Fixed::~Fixed() {
  std::cout << "Deconstructor called" << std::endl;
};





int Fixed::getRawBits( void ) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return(_value);
};

int Fixed::toInt( void ) const {
  return(getRawBits() >> this->_bits);
};

float Fixed::toFloat( void ) const {
  float	n;
  
  n = getRawBits();
  return (n / (1 << this->_bits));
};

void Fixed::setRawBits( int const raw )
{
 this->_value = raw;
};

Fixed & Fixed::operator=(Fixed const & num)
{
  if (this != &num)
    this->_value = num.getRawBits();
  std::cout << "Assignation operator called" << std::endl;

  return *this;
};


std::ostream &	operator<<(std::ostream & o, Fixed const & val)
{
  o << val.toFloat();
  return o;
}
