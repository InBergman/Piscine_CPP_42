#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer {

private:
  std::string _name;
  std::string _title;
  
public:
  // CONSTRUCTOR & DESTRUCTOR
  Sorcerer(std::string name, std::string title);
  Sorcerer(void);
  ~Sorcerer(void);


  // GETTER
  std::string  getName(void) const;
  std::string  getTitle(void) const;

  // SETTER
  void         setName(std::string & name);
  void         setTitle(std::string & title);

  // OTHERS
  std::string  introduce(void) const;
  virtual void         polymorph(Victim const &) const;
  //  virtual void         polymorph(Peon const &) const;
  
};

std::ostream & operator<<(std::ostream & stream, Sorcerer const & sorc);

#endif
