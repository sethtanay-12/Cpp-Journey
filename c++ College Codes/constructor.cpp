// #include <iostream>
// using namespace std;

// class student {
// public :
//     student(){
//         cout << "HELLO WORLD"; // constructor
//     }
// };

// int main () {
//     student s1;
// }


/*
It is a special type of function which invokes automatically when 
an object is made. We dont need to do any other things like s1.somthing
to call it.

It automatically gets called.

It has 3 types :- 

1. Default
2. Parameterized
3. Copy 

The first code is an example of Default.
*/


//DEFAULT :-

// #include <iostream>
// using namespace std;

// class students {
//     int x;
    
//     public:

//     students (int a){
//         x = a;

//         cout << x;
//     }
// };

// int main () {
//     students s1(3);
// }

// COPY :-

#include <iostream>
using namespace std;

class student {
    int x;

    public:

    student(int a){
           x = a;  
    }

    student (student &b){
        x = b.x;
        
    }
};

int main () {
    student s1(3);
    student s2(student s1);
}