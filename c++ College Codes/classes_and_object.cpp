#include <iostream>
using namespace std;

class student {
    public :

    int roll;
    string name;
};

int main () {
    student s1;

    s1.roll = 22;
    s1.name = "TANAY SETH";

    cout << "Student Name Is " << s1.name << '\n';
    cout << "Student Roll Number Is " << s1.roll;

}
