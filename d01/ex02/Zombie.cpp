#include "Zombie.hpp"


Zombie::Zombie(std::string new_name) : type("null"), name(new_name){

};

Zombie::~Zombie(){

};

void Zombie::announce(){
  this->type = typeid(this).name();
  std::cout << "< "
	    << this->type
	    << " "
	    << this->name
	    << " >"
	    << std::endl;
};
