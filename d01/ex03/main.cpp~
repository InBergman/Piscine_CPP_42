#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void) {

  Zombie zomb[3] = {Zombie("dude1"), Zombie("dude2"), Zombie("dude3")};
  ZombieEvent eventZomb;

  zomb[0].announce();
  zomb[1].announce();
  zomb[2].announce();

  std::cout << eventZomb.eventType << std::endl;
  
  eventZomb.setZombieType(zomb[0]);
  eventZomb.setZombieType(zomb[1]);
  			 
  std::cout << eventZomb.eventType << std::endl;
				      
  Zombie *zum  = eventZomb.randomChump();
  delete zum;
  return(0);
}
