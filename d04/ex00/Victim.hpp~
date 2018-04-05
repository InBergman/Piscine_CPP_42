#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>

class Victim {

private:
  std::string _name;

public:
    // CONSTRUCTOR & DESTRUCTOR
  Victim(std::string name);
  Victim(void);
  ~Victim(void);

  // GETTER
  virtual std::string  getName(void) const;

  // SETTER
  virtual void         setName(std::string & name);

  std::string  introduce(void) const;
  virtual void         getPolymorphed(void) const;
  
};

std::ostream & operator<<(std::ostream & stream, Victim const & vict);

#endif
