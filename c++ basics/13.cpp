#include <iostream>
using namespace std;
int main () {

    int a;

    cout << "ENTER A NUMBER : ";
    cin >> a;

    a%2 == 0 ? cout << "ITS AN EVEN NUMBER" : cout << "ITS AN ODD NUMBER"; //ternary opertaor an alternative to if else statement
}