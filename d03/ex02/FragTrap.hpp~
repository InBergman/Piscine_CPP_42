#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <time.h>

class FragTrap {

private:

  int _value;

public:

  std::string Name;
  unsigned int HitPoints;
  unsigned int MaxHitPoints;
  unsigned int EnergyPoints;
  unsigned int MaxEnergyPoints;
  unsigned int Level;
  unsigned int MeleeAttackDamage;
  unsigned int RangedAttackDamage;
  unsigned int ArmorDamageReduction;


  void meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void rangedAttack(std::string const & target);
  void vaulthunter_dot_exe(std::string const & target);

  FragTrap();
  FragTrap(std::string & name);
  FragTrap(FragTrap const & value);
  ~FragTrap();

};

#endif
