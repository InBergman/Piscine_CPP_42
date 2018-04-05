#include "contact.class.hpp"

contact::contact(void) : complete(0), set(0)
{
  // std::cout << "Contructeur done" << std::endl;
};

contact::~contact(void)
{
  // std::cout << "Decontructeur done" << std::endl;
};

void contact::display(void) {
  int i = -1;

  while( ++i != 10 ) {
      std::cout << this->str_format[i];
      std::cout << " | ";
  }
  std::cout << std::endl;
}

void contact::format(int index) {

  int i = -1;
  
  while( ++i != 10 ) {
    if (this->infos[i].length() >= 9) {
      this->str_format[i].assign(this->infos[i], 0, 9);
      this->str_format[i].append(".");
    }
    else
      this->str_format[i].assign(this->infos[i]);
  }
  std::cout << index << " ";
    std::cout << this->str_format[0];
    std::cout << " | " << this->str_format[1];
    std::cout << " | " << this->str_format[2] << std::endl;
}

void contact::fill(void) {
  int i = -1;
  std::string user_info[] = {
    "firstName",     "lastName",     "nickname","login",
    "postalAddress", "emailAddress", "phoneNumber",
    "birthdayDate",  "favoriteMeal", "underwearColor",
    "darkestSecret" };
  
  while(++i < 11) {
    std::cout << "veuillez renseigner: " << user_info[i] << std::endl;
    std::getline(std::cin, this->infos[i]);
    
    if (this->infos[i] != "")
      this->complete = 1;
  }
};
