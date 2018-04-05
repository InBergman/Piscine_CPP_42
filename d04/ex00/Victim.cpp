#include "Victim.hpp"

Victim::Victim(std::string name) {

  setName(name);
  std::cout << "Some random victim called "
	    << getName()
	    << " just popped !"
	    << std::endl;
  
};

Victim::Victim(void) :_name("M le maudit") { };

std::string Victim::introduce(void) const {
  return("I am " + getName() + " and I like otters !\n");
};


std::string Victim::getName(void) const {
  return (this->_name);
};

void        Victim::setName(std::string &  name) {
  this->_name = name;
};


Victim::~Victim(void) {
  std::cout << "Victim "
	    << getName()
	    << " just died for no apparent reason !"
	    << std::endl;
};

std::ostream & operator<<(std::ostream & stream, Victim const & vict) {
  stream << vict.introduce();
  return(stream);
};


void Victim::getPolymorphed(void) const {
  std::cout << getName()
	    << " has been turned into a cute little sheep !"
	    << std::endl;
};
