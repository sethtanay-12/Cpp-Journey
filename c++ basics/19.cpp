#include <iostream>
#include <ctime>

using namespace std;

int main () {

    srand(time(0));

    int random = rand() % 3 + 1;

    switch(random){

        case 1 : cout << "YOU WON A CAR";
         break;
    
        case 2 : cout << "YOU WON A HOUSE";
         break;

        case 3 : cout << "YOU WON 10000000 dollars";
         break;
    }

}