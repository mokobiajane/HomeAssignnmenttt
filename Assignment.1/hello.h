//Mokobia Jane Chidima, st135735@student.spbu.ru, 24.B83

#ifndef HELLO_H
#define HELLO_H      
#include <iostream>
#include <string>
void Hi(std::string user_name);
void Greet();
#endif
//<<<<<<< Updated upstream
//using namespace std;

//added include guard to the code as well(#ifdef n #endif)
/* Into the header you shoudl put declarations of your functions. Declarations is:
  return_value_type FunctionName(argument_type1 ArgName1, argument_type2 ArgName2 ...);
 * Than u need to create .cpp file which will have it's definition. Definition looks like:
  *same as declaration* {
      *your code*
      return statement
  }
  After that u can add your header via include into the main.cpp and use your function
  */
//=======
//using namespace std;


//>>>>>>> Stashed changes
