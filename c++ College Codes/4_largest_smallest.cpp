#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter the number of elements : ";
    cin >> n;

    int arr[n];

    for(int i = 0 ; i<n ; i++){
        cout<< "Enter number " << i+1 << " : ";
        cin>>arr[i];
    }

    int smallest = arr[0];
    int largest = arr[0];

    for(int j = 0 ; j<n ; j++){
        if (arr[j] < smallest){
            smallest = arr[j];
        }
        if (arr[j] > largest){
            largest = arr[j];
        }
    }

    cout<<"Smallest : "<<smallest<<'\n';
    cout<<"Largest : "<<largest<<'\n';

    return 0;

    
}