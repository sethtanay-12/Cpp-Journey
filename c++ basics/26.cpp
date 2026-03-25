#include <iostream>
using namespace std;

int main () {

    string cars [] = {"Mustang" , "Audi" , "Thar" , "G-Wagon"};

    for(int i = 0 ; i < sizeof(cars)/sizeof(string) ; i++){
        cout << cars [i] << '\n';
    }

    return 0;
}


//iteration in array rather writng cout and the array element positon it uses loop
