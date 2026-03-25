#include <iostream>
using namespace std;

int main () {
    int num;

    cout << "Enter a Number : ";
    cin >> num;

    bool IsPrime = true;

    if (num < 2){
        IsPrime = false;
    }

    for (int i = 2 ; i*i <= num ; i++){ /*this checks till the sqaure root of the number we gave
                                         cuz if the sqare root divides the number it already is not a prime number*/
        if (num % i == 0){
            IsPrime = false;
        }
    }

    if (IsPrime){
        cout << "PRIME";
    }
    else{
        cout << "NOT PRIME";
    }

    return 0;
}