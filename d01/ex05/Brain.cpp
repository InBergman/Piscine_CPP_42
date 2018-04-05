#include "Human.hpp"
#include "Brain.hpp"
#include <sstream>

Brain::Brain(){

};

Brain::~Brain(){

};

std::string Brain::identify() const {
  std::string name;
  std::ostringstream address;
  
  address << (void const *)this;
  name = address.str();
  return (name);
};
