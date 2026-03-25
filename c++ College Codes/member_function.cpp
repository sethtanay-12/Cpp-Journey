#include <iostream>
using namespace std;

class student {
    int roll;
    int marks;
public :
    void print();
};

void student::print() {
    cout<<"ENTER ROLL NUMBER : " <<'\n';
    cin>>roll;
    cout<<"ENTER MARKS : ";
    cin>>marks;

    cout << "YOUR ROLL NUMBER AND MARKS ARE : "<<roll<<" , "<<marks;
}

int main () {
    student s1;

    s1.print();
    return 0;
}