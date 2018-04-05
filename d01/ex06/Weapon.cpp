#include "Weapon.hpp"

Weapon::Weapon() { };

Weapon::Weapon(std::string armName):type(armName) {
  
};

Weapon::~Weapon() {
 std::cout << "Deconstructeur Weapon" << std::endl;
};

std::string const & Weapon::getType() const {
  return(this->type);
};

void Weapon::setType(std::string armName) {
  this->type = armName;
};
