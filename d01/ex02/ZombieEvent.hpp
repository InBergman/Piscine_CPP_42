#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Zombie.hpp"

class ZombieEvent {

private:

public:
  std::string name;
  std::string eventType;
  
  ZombieEvent();

  void      setZombieType(Zombie zombie);
  Zombie*   newZombie(std::string name);
  Zombie*   randomChump();
  
  ~ZombieEvent();

};

#endif
