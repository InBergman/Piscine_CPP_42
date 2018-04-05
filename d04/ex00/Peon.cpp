#include "Peon.hpp"
#include "Victim.hpp"

Peon::Peon() {
  std::cout << "Zog zog" << std::endl;
};

Peon::Peon(std::string name): Victim::Victim(name) {
  setName(name);
  std::cout << "Zog zog" << std::endl;  
};

Peon::Peon(Peon & po) {
  (*this) = po;
};

std::string Peon::getName(void) const {
  return (this->_name);
};

void        Peon::setName(std::string & name) {
  this->_name = name;
};


Peon::~Peon(void) {
  std::cout << "Bleuark..." << std::endl;
};


std::ostream & operator<<(std::ostream & stream, Peon const & peon) {
  stream << peon.introduce();
  return(stream);
};

std::string Peon::introduce(void) const {
  return("I am " + getName() + " and I like otters !\n");
};

void Peon::getPolymorphed(void) const {
  std::cout << getName()
	    << " has been turned into a pink pony !"
	    << std::endl;
};

