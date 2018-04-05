#include "Pony.hpp"

Pony::Pony() : numOfPaws(6), numOfHeads(2), name("Tabata") {
  std::cout << "constructor called" << std::endl;
  Pony::_numOfPony++;
};

Pony::~Pony(){
  std::cout << "destructor called" << std::endl;
  Pony::_numOfPony--;
};

void Pony::ponyOnTheHeap(){
  Pony *hPony;

  hPony = new Pony;

  hPony->numOfPaws  += 1;
  hPony->numOfHeads += 2;
  hPony->name  += " usuly goes by three.";

  std::cout << "- HEAP -" << std::endl;
  std::cout << hPony->numOfPaws << std::endl;
  std::cout << hPony->numOfHeads << std::endl;
  std::cout << hPony->name << std::endl;
  std::cout << "- HEAP -" << std::endl;
  
  delete hPony;
};

void Pony::ponyOnTheStack(){
  Pony sPony;

  sPony.numOfPaws  += 12;
  sPony.numOfHeads += 42;
  sPony.name  += " is a also a shity exercice.";

  std::cout << "- STACK -" << std::endl;
  std::cout << sPony.numOfPaws << std::endl;
  std::cout << sPony.numOfHeads << std::endl;
  std::cout << sPony.name << std::endl;
  std::cout << "- STACK -" << std::endl;
};

int Pony::getNumOfPony() const{
  return(this->_numOfPony);
}

int Pony::_numOfPony = 0;
