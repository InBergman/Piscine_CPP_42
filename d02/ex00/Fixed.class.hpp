#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {

private:
  //◦ An integer to store the fixed point value.
  int _value;
  //◦ A static constant integer to store the number of fractional bits.
  //  This constant will always be the litteral 8.
  static const int fracBits;

public:
  //◦ An assignation operator overload.
  Fixed & operator=(Fixed const & num);
  // A member function int getRawBits( void ) const;
  // that returns the raw value of the fixed point value.
  int getRawBits( void ) const;
  //A member function void setRawBits( int const raw );
  // that sets the raw value of the fixed point value.
  void setRawBits( int const raw );
  // A default constructor that initializes the fixed point value to 0.
  Fixed();
  // A copy constructor.
  Fixed(Fixed const & val);
  // A destructor.  
  ~Fixed();
};

#endif
  
