#include <iostream>

using namespace std;


int main (){

    int a;

    cout << "ENTER THE MOTH (1-12)";
    cin >> a;

    switch(a){
        
        case 1: cout << "IT IS JANUARY";
        break;

        case 2: cout << "IT IS FEBRUARY";
        break;

        case 3: cout << "IT IS MARCH";
        break;

        case 4: cout << "IT IS APRIL";
        break;

        case 5: cout << "IT IS MAY";
        break;

        case 6: cout << "IT IS JUNE";
        break;

        case 7: cout << "IT IS JULY";
        break;

        case 8: cout << "IT IS AUGUST";
        break;

        case 9: cout << "IT IS SEPTEMBER";
        break;

        case 10: cout << "IT IS OCTOBER";
        break;

        case 11: cout << "IT IS NOVEMBER";
        break;

        case 12: cout << "IT IS DECEMBER";
        break;

        default: cout << "ENTER A VALID NUMBER";
    }

    return 0;


}