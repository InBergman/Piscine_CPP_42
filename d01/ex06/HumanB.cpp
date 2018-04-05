#include "HumanB.hpp"

HumanB::HumanB(std::string new_name) :name(new_name){
};

HumanB::~HumanB(){
  std::cout << "Deconstructeur HumanB" << std::endl;
};

void HumanB::setWeapon(Weapon & club) {

  b_weapon =  &club;
}

void HumanB::attack() {
  std::cout << this->name
            << " attack with his "
	    << b_weapon->getType()
	    << std::endl;
};
