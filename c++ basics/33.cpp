#include <iostream>
using namespace std;

int main () {
    int num [] [3] = {{1 , 2 , 3},
                     {4 , 5 , 6},
                     {7 , 8 , 9}};

                     int row = sizeof (num)/sizeof (num[0]);
                     int coulumn = sizeof (num[0])/sizeof (num[0][0]);
                     
                     for (int i = 0 ; i < row ; i++){
                        for (int c = 0 ; c < coulumn ; c++){
                            cout << num[i][c];
                        }

                        cout << '\n';
                     }
    return 0;
}