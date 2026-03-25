#include <iostream>
using namespace std;

class students {
    int x;
    public:

    void setdata(int a){
        x = a;
    }

    friend void display(students obj);
};

void display (students obj) {
    cout << obj.x;
}


int main () {
    students s1;
    s1.setdata(5);
    display(s1);
}