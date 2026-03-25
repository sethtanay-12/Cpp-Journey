#include <iostream>

using namespace std;

int billadd(int bill [] , int size){
    int total = 0;

    for (int i = 0 ; i < size ; i++){
        total += bill[i];

        return total;
    }
    
}

int main () {

    int bill [] = {77,22,43,32,532,63};
    int size = sizeof(bill)/sizeof(int);
    int total = billadd(bill , size);

    cout << "THE TOTAL IS : " << total;

    return 0;

}