#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
// #include <iomanip>
#include <typeinfo>

class Zombie {

private:

public:
  std::string name;
  std::string type;
  
  Zombie();

  void announce();
  
  ~Zombie();
};

#endif
