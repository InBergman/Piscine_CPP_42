#include "Human.hpp"
#include "Brain.hpp"

Human::Human() {

};

Human::~Human() {

};

Brain const & Human::getBrain() const  {
  return(this->brain);
}

std::string Human::identify() const {
  return (this->brain.identify());
}
