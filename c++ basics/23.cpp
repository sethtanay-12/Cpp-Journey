#include <iostream>
using namespace std;

void bakepizza(){
    cout << "HERE IS YOUR PIZZA\n";
}

void bakepizza(string topping1){
    cout << "HERE IS YOUR " << topping1 <<" PIZZA\n";
}

void bakepizza(string topping1 , string topping2){
    cout << "HERE IS YOUR " << topping1 << " AND " << topping2 <<" PIZZA\n";
}

int main () {
    bakepizza(); 
    bakepizza ("CHEESE");
    bakepizza ("CHEESE" , "PANEER");

    return 0;
}


/*
function over loading
*/