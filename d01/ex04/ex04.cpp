#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *str_pointer = &str;
  std::string &str_ref = str;

  std::cout << *str_pointer << std::endl;
  std::cout << str_ref << std::endl;
  
  return(0);
}
