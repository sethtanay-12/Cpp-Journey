#include <iostream>
using namespace std;

void nameadder (string a , string b){
    cout << a << " " << b;
}

int main (){
    string name1 = "TANAY";
    string name2 = "SETH";

    cout << "HELLO ";
    nameadder (name1 , name2);

    return 0;
}