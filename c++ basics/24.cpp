#include <iostream> 
using namespace std;

int num = 5;

void mynum (){
    int num = 8;
    cout << ::num;// we use :: to pring the global value if we have given a value loally
}

int main () {

    int num = 7;//a function ccannot see whats in the other function

    mynum();
    return 0;
}