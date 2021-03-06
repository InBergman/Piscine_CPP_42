
#include "contact.class.hpp"

int add(contact *user, int global_index)
{
  user[global_index].fill();
  return(++global_index);
}

void search(contact *user, int global_index)
{
  int i = -1;
  int index = 0;
  while(++i != global_index) {
    user[i].format(i);
  }
  std::cout << "Veuillez entrer un index";
  std::cin >> index;
  
  // TODO : check if index is an number;
  // TODO : check if index is under global_index;
  i = -1;
  while(1) {
    if(++i == index) {
     user[i].display();
     break;
    }
  }
}

int main(void)
{
    contact my_contact[8];
    int global_index = 0;
    std::string command;
    while(1) {
	std::cout << "veuillez entrer une commande: " << std::endl;
	std::getline(std::cin, command);
    
	if(command.compare("add") == 0) {
	    if (global_index == 8) {
		std::cout << "Carnet remplit, limite de huit contact atteinte";
		break;
      }
      else {
	global_index = add(my_contact, global_index);
	continue;
      }
    }
    else if(command.compare("search") == 0) {
      search(my_contact, global_index);
      continue;
    }
    else if(command.compare("exit") == 0)
      return (0);
  }
  
  return(0);
}
