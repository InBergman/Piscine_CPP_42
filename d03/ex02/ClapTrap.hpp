#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <time.h>

class ClapTrap { 

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
  
  ClapTrap(void) { };
  //ClapTrap(std::string const name);
  ClapTrap(ClapTrap const & src);
  ~ClapTrap(void);

  std::string  getName(void) const;
  void	       setName(std::string const name);
  void	       rangedAttack(std::string const & target);
  void	       meleeAttack(std::string const & target);
  void	       takeDamage(unsigned int amount);
  void	       beRepaired(unsigned int amount);

};

#endif
