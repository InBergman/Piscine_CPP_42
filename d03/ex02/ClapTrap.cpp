#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap const & src) {
  
  std::cout << "Enterrrrr the CHAMPION!" << std::endl;
  *this = src;
  return;
}

ClapTrap::~ClapTrap() {

  std::cout << "I'll die as I lived: annoying!" << std::endl;
  return;
}

void ClapTrap::meleeAttack(std::string const & target)
{
 
  std::cout
    << "FR4G-TP <"
    << this->_name
    << "> attacks <"
    << target
    << "> at range, causing <"
    << this->_Melee_attack_damage
    << "> points of damage ! " << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount)
{
  if(amount > this->_Armor_damage_reduction) {
    amount -= this->_Armor_damage_reduction;
    this->_Armor_damage_reduction = 0;
  }
  else {
    this->_Armor_damage_reduction -= amount;
    amount = 0;
  }
  if(amount > this->_Max_hit_points || ((int)this->_Energy_points - (int)amount) < 0)
    this->_Energy_points = 0;
  else
    this->_Energy_points -= amount;
    
  std::cout
    << "FR4G-TP <"
    << this->_name
    << "> took <"
    << amount
    << "> damage, he now have <"
    << this->_Energy_points
    << "> of energy point !" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount)
{
  if(amount > this->_Max_energy_points || (this->_Energy_points + amount) > this->_Max_energy_points)
    this->_Energy_points = this->_Max_energy_points;
  else
    this->_Energy_points += amount;
  std::cout
    << "FR4G-TP <"
    << this->_name
    << "> has been given back <"
    << amount
    << "> of energy point he now have <"
    << this->_Energy_points
    << "> of energy points !" << std::endl;
  
};

void ClapTrap::rangedAttack(std::string const & target)
{
  std::cout
    << "FR4G-TP <"
    << this->_name
    << "> attack at range <"
    << target
    << "> causing <"
    << this->_Ranged_attack_damage
    << "> of damage !" << std::endl;
};

void	ClapTrap::setName(std::string const name) {
  
  this->_name = name;
  return;
}

std::string  ClapTrap::getName(void) const {
  return this->_name;
};
