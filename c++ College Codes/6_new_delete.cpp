#include <iostream>
using namespace std;

int main () {
    int * ptr = new int;

    cout<< "Enter a number : ";
    cin >> * ptr;

    cout<<"You entered " << * ptr <<'\n';//dynamic memory allocation

    delete ptr;

    cout << "Memory deallocated using delete"<<'\n';

    return 0;
}