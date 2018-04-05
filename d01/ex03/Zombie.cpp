#include "Zombie.hpp"


Zombie::Zombie(){
  std::string new_name;
  char voyelle[5] = {'a','e','i','o','u'};
  int i = -1;
  int tmp = 0;

  while(++i != 2) {
    tmp = rand() % (122 - 97 + 1) + 97;
    new_name += (char)tmp;
    new_name += voyelle[rand()% 5];
  }
  new_name += "ski";
  this->name = new_name;
  // this->type = this->eventType;
  //this->announce();
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
