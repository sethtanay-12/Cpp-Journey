#include <iostream>
using namespace std;

int main () {

    int num [5];
    int size = sizeof(num)/sizeof(int);

    for (int i = 0 ; i<size ; i++ ){
        cout << "ENTER YOUR 5 FAVORITE NUMBERS # " << i + 1 << " : ";
        cin >> num[i];
        }

        cout<<"YOU LIKE THE FOLLOWING NUMBERS : " << '\n' ;

        for (int j = 0 ; j<size ; j++){
            cout << num[j] << '\n';
        }
}