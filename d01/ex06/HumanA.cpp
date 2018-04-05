#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon & club)
  :a_weapon(club), name(new_name)
{
  //a_weapon = new Weapon;
  // a_weapon = &club;
};

HumanA::~HumanA(){
  //delete a_weapon;
  std::cout << "Deconstructeur HumanA" << std::endl;
};

void HumanA::attack() {
  std::cout << this->name
            << " attack with his "
	    << this->a_weapon.getType()
	    << std::endl;
};
