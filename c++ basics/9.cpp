#include <iostream>

int main () {
    std::string name;

    std::cout << "WHAT IS YOUR FULL NAME" << '\n';
    std::getline(std::cin, name);// helps us to take inpur having white spaces

     std::cout << "HELLO "<< name <<'\n';

     std::string father;
      
     
      std::cout << "WHAT IS YOUR  FATHER FULL NAME" << '\n';
      std::getline(std::cin, father);

      std::cout << "YOUR FATHER NAME IS "<< father <<'\n'; 

      return 0;
}

/*
we have to keep this in mind that
if we are using getline statement in one condition
we have to use it in every condtion which will contain white
space in it

if not used it will give us error


because after pressing enter in one condition
it reads enter as \n and thinks that it is an empty
line for the second condition*/



//or also we can add >> std::ws after std::cin to solve the problem :)