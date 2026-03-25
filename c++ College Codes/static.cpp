#include <iostream>
using namespace std;

class student {
    static int roll; // static data member
    long long contact; // data member

public :

    void datain (int r , long long c){
        roll = r;
        contact = c;
    }
    void dataout (){
        cout << "Your roll number is " << roll <<'\n';
        cout << "Your contact detail is " << contact;
    }
};

int student::roll; // we have to tell the compiler that we have a satic member in our class

int main () {

    student s1;
    
    s1.datain(4674 , 9793191606);
    s1.dataout();

}






/*
static keyword is the only member in class who is assigned memory on compile time
it is initialized with 0 when we create an object of the class
only one copy is made for satic keyword and circulates all over the code


in exam for this question always make boxes for the object and in that object box
write the members which are not static

then in a different box show static data member for good MARKSSSSSSSSSSSSS
*/