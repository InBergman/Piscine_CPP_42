#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: ClapTrap {

private:

  unsigned int		_Hit_points;
  unsigned int		_Max_hit_points;
  unsigned int		_Energy_points;
  unsigned int		_Max_energy_points;
  unsigned int		_Level;
  unsigned int		_Melee_attack_damage;
  unsigned int		_Ranged_attack_damage;
  unsigned int		_Armor_damage_reduction;
  std::string           _name;

public:

  FragTrap();
  FragTrap(std::string & name);
  FragTrap(FragTrap const & value);
  ~FragTrap();
  
  void vaulthunter_dot_exe(std::string const & target);

};

#endif
