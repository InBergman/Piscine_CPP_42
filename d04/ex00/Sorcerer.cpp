#include "Sorcerer.hpp"


Sorcerer::Sorcerer(std::string name, std::string title) {

  setName(name);
  setTitle(title);
  
  std::cout << getName() << ", " << getTitle()
	    << "is born !" << std::endl;
  
};

Sorcerer::Sorcerer(void) :_name("Taylor"),
			  _title("the creator")
{

};

std::string Sorcerer::introduce(void) const {
  return("I am " + getName() + ", " + getTitle() + " and I like ponies !\n");
};


std::string Sorcerer::getName(void) const {
  return (this->_name);
};

std::string Sorcerer::getTitle(void) const {
  return (this->_title);
};

void        Sorcerer::setTitle(std::string & title) {
  this->_title = title;
};

void        Sorcerer::setName(std::string &  name) {
  this->_name = name;
};


Sorcerer::~Sorcerer(void) {
  std::cout << getName() << ", " << getTitle()
	    << " is dead. Consequences will never be the same !" << std::endl;
};

std::ostream & operator<<(std::ostream & stream, Sorcerer const & sorc) {
  stream << sorc.introduce();
  return(stream);
};

void        Sorcerer::polymorph(Victim const & victim) const {
  victim.getPolymorphed();
};
