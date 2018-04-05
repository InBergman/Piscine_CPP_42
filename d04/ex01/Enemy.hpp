#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>


class Enemy
{
private:
  [...];
public:
  Enemy(int hp, std::string const & type);
  [...] ~Enemy();
  std::string [...] getType() const;
  int getHP() const;
  virtual void takeDamage(int);  
};

#endif
