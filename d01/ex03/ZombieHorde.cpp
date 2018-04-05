#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) {
  Zombie *zomb = new Zombie[n];
  this->announce(zomb, n);
  delete[] zomb;
};

void ZombieHorde::announce(Zombie *zomb, int n) {
  int i = -1;
  while(++i < n) {
    zomb[i].announce();
  }
}

ZombieHorde::~ZombieHorde(){

};
