#include <iostream>

 namespace first{
        int c  =  8;
    }

 namespace second{
        int c = 5; 
    }

int main () {
    int c = 7;

    std::cout << c << '\n';//will print the local value of c



    std::cout << first::c << '\n';//will print the first valure we gave of c
    std::cout << second::c << '\n';//will print the second valure we gave of c


    return 0;

} 
