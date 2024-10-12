/*Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83*/

#include "hello.h"


int main(){
  std::string user_name;

  while (true)
  {
    Greet();
    std::cout<< "Enter User_name or (enter 'exit' to quit):";
    std::cin>>user_name;

    if(user_name == "exit"){
        break;
    }
    Hi(user_name);
//<<<<<<< Updated upstream
    /* Try to formalize this as a function */
    //cout << "Hello, " + input <<endl; i did this 
    //in hello.cpp already
  }
   return 0;
}

//>>>>>>> Stashed changes
