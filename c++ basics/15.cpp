#include <iostream>
using namespace std;

int main () {
    string name;

    while(name.empty()){
        cout << "ENTER YOUR NAME : ";
        getline(cin, name);
    }

    cout << "HELLO" << name;

    return 0;
}

/*
A while loop is helpful
when we want to make the code run in a loop until
and unless its condition is false


In real cases we can use while loop if we
want the user to enter some details
first then only the code will move ahead or it will not



If we would have used if condition here what
it might have done is 
it would have taken an empty name when we pressed enter
and moved the code ahead
*/