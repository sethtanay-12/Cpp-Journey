#include <iostream>
using namespace std;

int main () {
    
    for (int x = 1; x<=3; x++){
        for(int i = 1; i<=10; i++){
        cout << "*" << ' '; 
    }
    cout << '\n';
    }
     
} 

//example of nested loops to print * 10 times and this whole 3 times


// in nested loops the parent loop will change itself
//when the inner loops individually completes fully and resets
//if we have 3 loops
/*
the 2nd loop will complete fully then move to 3 
then the 1st loop will move to its 2nd iteration
:)*/