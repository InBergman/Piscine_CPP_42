#include <iostream>
#include <string>


void freePanthere(std::string* & toDel) {
  delete toDel;
}


void memoryLeak() {
  std::string*        panthere = new std::string("String panthere");
  std::cout << panthere << std::endl;
  std::cout << *panthere << std::endl;
  //delete panthere;
  freePanthere(panthere);
  std::cout << panthere << std::endl;
  std::cout << *panthere << std::endl;
  
}

int main(void) {
  memoryLeak();
  return(0);
}
