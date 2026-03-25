#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 4; i++) {
        
        for (int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }
        
        for (int x = 1; x <= 2 * i - 1; x++) {
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}
