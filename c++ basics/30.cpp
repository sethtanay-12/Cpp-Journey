#include <iostream>
using namespace std;

int sort (int num [] , int size);

int main () {

    int num [] = {2 , 1 , 5 , 8 , 6 , 3 , 10 , 4 , 7 , 9};
    int size = sizeof(num)/sizeof(int);

    sort(num , size);

    for (int i = 0 ; i < size ; i++) {
        cout << num[i] << " ";
    }

    return 0;

}

int sort (int num [] , int size){

    int temp;

    for(int i = 0 ; i < size - 1 ; i++){//size - 1 because we dont have to include the last numbe rits already sorted. KAB TAK CHALANA H

        for(int j = 0 ; j < size - i - 1 ; j++){// size - i - 1 because we dont want to sort itesm which are already sorted . KISKE LIYE CHALANA H
            
            if(num [j] < num [j + 1]){// we can change < , > for accending and decending orders
                temp = num[j];
                num[j] = num [j + 1];
                num [j + 1] = temp;
            }

        }

    }  
       
}


//bubble sort sorting algorithm