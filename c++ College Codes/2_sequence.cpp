#include <iostream>
using namespace std;

int main () {
    int n ;
    cout << "ENTER n : ";
    cin >> n;

    cout<< "First n terms of the sequence is : ";
    for(int i = 0 ; i<= n ; i++) {
        cout << i << " ";
    }

    return 0;
}