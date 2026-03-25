#include <iostream>
using namespace std;

int main () {
    string name;

    cout <<"WHATS IS YOUR NAME : ";
    getline(cin, name);

    if(name.length()>10){ //.length is used to let the pc know how many letter are there
        cout << "YOU CANNOT ENTER NAMES MORE THAN 10 CHARACTERS";
    }

    else{
        cout << "HELLO" << name ;
    }


}

//.empty() works as a boolean signal if there is a input or not given by the user
//.clear() is to clear some value or something stored in a variable from the output
//.append("is mad") is used to add something by default in the sentence or the input given by the user 
//.at(0,1,2,....) is used to detect the element position in the given input
//.insert(postion of the element , what we want to insert) is used to insert elements at some position we want
//.find(" ") is used to find a deserired element position
//.erase(beginning index, ending index) is used to erase something from the input eg:- name.erase(0,3)
//