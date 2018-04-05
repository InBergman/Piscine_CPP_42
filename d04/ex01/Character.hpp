#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>


class Character
{
private:

public:
  Character()
  Character(std::string const & name);
  Character(Character *char);
  ~Character();
  void recoverAP();
  void equip(AWeapon* weap);
  void attack(Enemy* enemy);
  std::string [...] getName() const;
};

#endif
