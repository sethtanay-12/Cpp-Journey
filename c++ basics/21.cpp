#include <iostream>
using namespace std;

void bday (string name , int age){
    cout << "HAPPY BIRTHDAY " << name << '\n';
    cout << "YOU ARE NOW " << age << " YEAR OLD" << '\n';
}

int main () {
    int age = 21;
    string name = "TANAY";

    bday(name , age);

    return 0;
}