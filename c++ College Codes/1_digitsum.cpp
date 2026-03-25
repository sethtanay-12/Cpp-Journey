#include <iostream>
using namespace std;

int main () {
    int n , input , total = 0 ;

    cout << "ENTER A NUMBER : " ;
    cin >> input;

    while (input != 0) {
        n = input % 10;
        total += n;
        input = input / 10;
    }
    
    cout << "THE SUM IS = " << total;   
}

/*
% 10 extracts the last digit of the given number

/10 eleminate the end digit formt he number
*/