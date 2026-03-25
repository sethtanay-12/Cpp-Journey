#include <iostream>
using namespace std;

int main(){
    int x = 3.14; //implicit way for type conversion (automatic)
    cout << x << '\n';



    double y = (int)3.14 ; //explicit way for type conversion . DATA LOSS
      cout << y << '\n';

      char c = 'A'; //implicit
      int j = c;
      cout << j;

      return 0;
}