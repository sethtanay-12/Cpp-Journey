#include <iostream>
using namespace std;

class person {
    string name;
    int age;


    public:

    void getdata (string n , int a);
    void display ();
};

void person::getdata(string n , int a){
    name = n;
    age = a;
}

void person::display(){
    cout << name << '\n';
    cout << age <<'\n';
}

int main () {
    person p1;

    p1.getdata("TANAY" , 50);
    p1.display();
}