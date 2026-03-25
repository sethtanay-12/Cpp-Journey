#include <iostream>
using namespace std;

void display () {
    static int x;
    int y = 0;// if not 0 it will throw garbage value cuz non static variables does not have any value if not given in run time

    x++;
    y++;

    cout << x << '\n';

    cout << y << '\n';
}


int main () {
    display();
    display();//calling the funtion again it will make y 0 again but in x there is a diff memory allocation therefore it will stay as 1 and will conver to 2 and so on
    display();
}


// static ko ke hi baar memory milti h
//y ke change hone ka reason h kyuki vo baar baar memory mil skta h