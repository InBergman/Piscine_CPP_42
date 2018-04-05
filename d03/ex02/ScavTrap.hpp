#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: ClapTrap {

private:
  
  int		_Hit_points;
  int		_Max_hit_points;
  int		_Energy_points;
  int		_Max_energy_points;
  int		_Level;
  int		_Melee_attack_damage;
  int		_Ranged_attack_damage;
  int		_Armor_damage_reduction;
  std::string _name;

public:

  ScavTrap(void);
  ScavTrap(std::string const name);
  ScavTrap(ScavTrap const & src);
  ~ScavTrap(void);
  
  ScavTrap &	operator=(ScavTrap const &);
  
  void	challengeNewcomer();

};

#endif
