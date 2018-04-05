#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class contact {

public:
  // variable
  int 		index;
  int           complete;
  int           set;
  std::string	infos[11];
  std::string   str_format[11];
  
  // methods
  void          fill(void);
  void          format(int index);
  void          display(void);

  // constructor & deconstructor
  contact(void);
  ~contact(void);
		
};

# endif
