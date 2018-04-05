#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Pony {

public:
    
  Pony();
  ~Pony();

  int numOfPaws;
  int numOfHeads;
  std::string name;

  void ponyOnTheHeap();
  void ponyOnTheStack();
  int getNumOfPony() const;
  
private:
  
   static int _numOfPony;
  
};

#endif
