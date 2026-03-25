#include <iostream>
using namespace std;

int main() {
    string name = "TANAY";
    int size = name.length();
    
    for(int i = 0; i < size; i++) {
        char c = name[i];
        int count = 0;
        
        
        for(int x = 0; x < size; x++) {
            if(name[x] == c) {
                count++;
            }
        }
        
        
        if(count > 1) {
            cout << c << " ";
        }
    }
}
