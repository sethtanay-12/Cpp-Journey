#include <iostream>
#include <ctime>

using namespace std;


int main () {

    int num;
    int guess;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    cout << "**********NUMBER GUESSING GAME**********" << '\n';

    do{
        cout << "ENTER YOU GUESS : ";
        cin >> guess;


        if(guess>num){
            cout << "THE GUESS IS TOO HIGH" << '\n';
        }

        else if(guess<num){
            cout << "THE GUESS IS TOO LOW" << '\n';
        }

        else{
            cout << "CORRECT GUESS!!" << '\n';
        }
    } while (guess != num);

    cout <<"*******************************************";

    return 0;
}


/*
we use do while when we know
that we have to take the input and then 
continue with the codition want to apply

And we use while loop when
the information which we want 
is already a conditon for the project
or the aim to proceed furthur in the code
*/