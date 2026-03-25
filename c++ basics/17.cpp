#include <iostream>

int main () {
    
    /*for (int i = 1; i<=10; i++){
        if(i == 5){
            break;//will break the loop from the given condition
        }
        std::cout << i << '\n';
    }*/

    for (int i= 1; i<=10; i++){
        if(i==5){
            continue;//skips the loop at the given condition
        }
        std::cout<< i << '\n';
    }
}
    


