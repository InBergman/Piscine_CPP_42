#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon: public Victim {

private:
  std::string _name;

public:
    // CONSTRUCTOR & DESTRUCTOR

  Peon(std::string name);
  Peon(Peon & po);
  Peon(void);
  ~Peon(void);

  // GETTER

  std::string  getName(void) const;

  // SETTER

  void         setName(std::string & name);
  void         getPolymorphed(void) const;
  std::string  introduce(void) const;
};

std::ostream & operator<<(std::ostream & stream, Peon const & peon);
#endif
