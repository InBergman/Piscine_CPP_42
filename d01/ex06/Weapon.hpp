#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
  std::string type;
public:

  std::string const &     getType() const;
  void                    setType(std::string armName);

  Weapon();
  Weapon(std::string armName);
  ~Weapon();
};

#endif
