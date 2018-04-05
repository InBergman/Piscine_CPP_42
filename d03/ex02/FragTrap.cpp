#include "FragTrap.hpp"

FragTrap::FragTrap(void): _Hit_points(100),
			  _Max_hit_points(100),
			  _Energy_points(100),
			  _Max_energy_points(199),
			  _Level(1),
			  _Melee_attack_damage(30),
			  _Ranged_attack_damage(20),
			  _Armor_damage_reduction(5)
{
  std::cout << "Constructor has been called" << std::endl;
  setName("default");
};

FragTrap::FragTrap(std::string & name): _name(name),
					_Hit_points(100),
					_Max_hit_points(100),
					_Energy_points(100),
					_Max_energy_points(199),
					_Level(1),
					_Melee_attack_damage(30),
					_Ranged_attack_damage(20),
					_Armor_damage_reduction(5)
{
  std::cout << "Constructor has been called" << std::endl;
};

FragTrap::FragTrap(FragTrap const & value)
{
  *this = value;
};

FragTrap::~FragTrap() {
   std::cout << "Deconstructor has been called" << std::endl;
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
