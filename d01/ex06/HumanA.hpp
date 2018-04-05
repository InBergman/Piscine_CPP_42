#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA {

private:

public:

  Weapon & a_weapon;
  std::string name;

  void attack();
  
  HumanA(std::string new_name, Weapon & club);
  ~HumanA();
};

#endif
