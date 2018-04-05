#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>


class AWeapon
{
  
private:
  std::string name;
  std::string sound;
  std::string light;
  int damagePoint;
  int actionPoint;
public:
  AWeapon();
  AWeapon(AWeapon* A);
  AWeapon(std::string const & name, int apcost, int damage);
  ~AWeapon();
  std::string [...] getName() const;
  int getAPCost() const;
  int getDamage() const;
  void attack() const = 0;
};

#endif
