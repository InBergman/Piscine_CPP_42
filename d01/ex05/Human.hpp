#ifndef HUMAN_HPP
#define HUMAN_HPP


#include "Brain.hpp"
#include <iostream>

class Human {

private:

public:
  Brain const brain;

  std::string identify() const;
  Brain const & getBrain() const;
  Human();
  ~Human();
};

#endif
