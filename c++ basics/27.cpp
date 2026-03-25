#include <iostream>
using namespace std;

int main () {

    string cars [] = {"Mustang" , "Audi" , "Thar" , "G-Wagon"};

    for(string car : cars){
        cout << car << '\n';// we can also use this to shorten the iteration code
    }//foreach loop

    return 0;

}