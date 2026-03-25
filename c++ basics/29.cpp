#include <iostream>
using namespace std;

int searchArray (int array [] , int size , int num);


int main () {
     
    int numbers[] = {1 , 3 , 5 , 6 , 7};
    int size = sizeof(numbers)/sizeof(int);

    int position;
    int mynum;

    cout << "ENTER THE NUMBER YOU WANT TO SEARCH : ";
    cin >> mynum;

    position = searchArray(numbers , size , mynum);

    if (position != -1){

        cout << "The position is " << position;
    
    }

    else {
        cout << "NUMBER NOT IN ARRAY";
    }
    
    return 0;

}

int searchArray (int array [] , int size , int num){

    for (int i = 0 ; i < size ; i++){
        if (array [i] == num){
            return i;
        }
    }

    return -1;
}