#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde {

private:
  void announce(Zombie *zomb, int n);
  
public:
  ZombieHorde(int n);
  ~ZombieHorde();

};

#endif
