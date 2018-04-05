#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB {
private:

public:
  
  Weapon*  b_weapon;
  std::string  name;

  void attack();
  
  
  HumanB(std::string  new_name);
  void setWeapon(Weapon & club);
  ~HumanB();
};

#endif
