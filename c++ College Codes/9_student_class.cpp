#include <iostream>
using namespace std;

class student{
    string name;
    int marks[3];
    int total;

    public:

    void assign() {
        cout << "ENTER NAME : "<<'\n';
        cin >> name;

        cout << "ENTER MARKS OF 3 SUBJECTS : "<<'\n';
        for (int i = 0 ; i<3 ; i++){
            cin >> marks[i];
        }
    }
     int MaxMarks = 300;

    void compute () {
        total = 0;

        for (int j = 0 ; j<3 ; j++){
            total += marks[j];
        }
    }

    void display (){
        cout << "Name "<<name<<'\n';
        cout << "Total Marks " << total<<'\n';
        cout << "Max marks "<<MaxMarks<<'\n';
        cout << "Average "<<total/3<<'\n';
    }

};

int main () {
    student s1;

    s1.assign();
    s1.compute();
    s1.display();

    return 0;
}