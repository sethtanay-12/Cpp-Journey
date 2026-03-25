#include <iostream>
using namespace std;

int main () {
    string name;

    cout << "WHAT IS YOUR NAME : ";

    getline(cin,name); // to get a user input 

    cout << "Hello "<< name <<'\n'; 
    
    return 0;
}