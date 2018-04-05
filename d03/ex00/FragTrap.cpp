#include "FragTrap.hpp"

FragTrap::FragTrap(std::string & name):
  Name(name),HitPoints(100), MaxHitPoints(100), EnergyPoints(100), MaxEnergyPoints(100),
  Level(1), MeleeAttackDamage(30), RangedAttackDamage(20),
  ArmorDamageReduction(5)
{

  std::cout << "Constructor has been called" << std::endl;
  
};

FragTrap::FragTrap(FragTrap const & value) {
  *this = value;
};

FragTrap::~FragTrap() {
   std::cout << "Deconstructor has been called" << std::endl;
};

void FragTrap::meleeAttack(std::string const & target)
{
 
  std::cout
    << "FR4G-TP <"
    << this->Name
    << "> attacks <"
    << target
    << "> at range, causing <"
    << this->MeleeAttackDamage
    << "> points of damage ! " << std::endl;
};

void FragTrap::takeDamage(unsigned int amount)
{
  if(amount > this->ArmorDamageReduction) {
    amount -= this->ArmorDamageReduction;
    this->ArmorDamageReduction = 0;
  } else {
    this->ArmorDamageReduction -= amount;
    amount = 0;
  }
  if(amount > this->MaxHitPoints || ((int)this->EnergyPoints - (int)amount) < 0)
    this->EnergyPoints = 0;
  else
    this->EnergyPoints -= amount;
    
  std::cout
    << "FR4G-TP <"
    << this->Name
    << "> took <"
    << amount
    << "> damage, he now have <"
    << this->EnergyPoints
    << "> of energy point !" << std::endl;
};

void FragTrap::beRepaired(unsigned int amount)
{
  if(amount > this->MaxEnergyPoints || (this->EnergyPoints + amount) > this->MaxEnergyPoints)
    this->EnergyPoints = this->MaxEnergyPoints;
  else
    this->EnergyPoints += amount;
  std::cout
    << "FR4G-TP <"
    << this->Name
    << "> has been given back <"
    << amount
    << "> of energy point he now have <"
    << this->EnergyPoints
    << "> of energy points !" << std::endl;
  
};

void FragTrap::rangedAttack(std::string const & target)
{
  std::cout
    << "FR4G-TP <"
    << this->Name
    << "> attack at range <"
    << target
    << "> causing <"
    << this->RangedAttackDamage
    << "> of damage !" << std::endl;
};

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
  int random = rand() % 5;
  switch(random) {
  case 0 :
    FragTrap::meleeAttack(target);
    std::cout << " + [SPECIAL ATTACK] <ASS> " << std::endl;
    break;
  case 1 :
    FragTrap::meleeAttack(target);
    std::cout << " + [SPECIAL ATTACK] <BUTT> " << std::endl;
    break;
  case 2 :
    FragTrap::meleeAttack(target);
    std::cout << " + [SPECIAL ATTACK] <FROM BEHIND> " << std::endl;
    break;
  case 3 :
    FragTrap::meleeAttack(target);
    std::cout << " + [SPECIAL ATTACK] <SNEAKY SOON> " << std::endl;
    break;
  case 4 :
    FragTrap::meleeAttack(target);
    std::cout << " + [SPECIAL ATTACK] <HIGHT IN THE SKY> " << std::endl;
    break;
  }
};
