#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <time.h>

class ScavTrap { 

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
  void	rangedAttack(std::string const & target);
  void	meleeAttack(std::string const & target);
  void	takeDamage(unsigned int amount);
  void	beRepaired(unsigned int amount);
  void	challengeNewcomer();
  void	setName(std::string const name);
  std::string getName(void) const;

};

#endif
