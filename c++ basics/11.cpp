#include <iostream>

using namespace std; //we can globally declare std to not write it again and agian


int main () {

    int a;

     cout << "ENTER YOUR AGE : ";

     cin >> a;


      if (a >= 18){
        cout << "WELCOME TO THE SITE!";
      }

      else if (a <= 0){
        cout << "YOU ARE NOT BORN YET!";
      }

      else{
        cout << "YOU CANNOT ENTER THIS SITE!";
      }


       return 0;

}