#include "ZombieEvent.hpp"
#include <stdlib.h>

ZombieEvent::ZombieEvent() : eventType("NULL") {

};

void ZombieEvent::setZombieType(Zombie & zombie){
  this->eventType = zombie.type;
};

Zombie* ZombieEvent::newZombie(std::string name){
  Zombie *zomb = new Zombie(name);
  zomb->type = this->eventType;
  return (zomb);
};

Zombie* ZombieEvent::randomChump(){
  Zombie *zomb = new Zombie(name);
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
  zomb->name = new_name;
  zomb->type = this->eventType;
  zomb->announce();
  return (zomb);
};
  
ZombieEvent::~ZombieEvent(){

};
