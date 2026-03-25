#include <iostream>
#include <string>

using namespace std;

class Student {
public:
   
    string name;
    int rollNumber;

    
    void introduce() {
        cout << "Hi! My name is " << name << " and my roll number is " << rollNumber << "." << endl;
    }
};

int main() {
    
    Student s1; 
    
   
    s1.name = "Tanay";
    s1.rollNumber = 4674;

    
    s1.introduce();

    return 0;
}