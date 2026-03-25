#include <iostream>
using namespace std;

class sample {
private:
    int x;

public:
  
    sample() : x(0) {  
        cout << "Default constructor called: " << x << endl;
    }
    
  
    sample(int a) {
        x = a;
        cout << "Parameterized constructor: " << x << endl;
    }
    
   
    sample(const sample &obj) {
        x = obj.x;  
        cout << "Copy constructor: " << x << endl;
    }
};

int main() {
    sample s1;           
    sample s2(50);      
    sample s3(s2);       
    
    return 0;  
}
