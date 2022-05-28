// 3.Take two integers from the user. Fill an integer array of size 25 with random values
// between the two numbers given by the user. Print the array.
#include <iostream>
using namespace std;
int main () {
    int n, i;
    n=25;
    int arr[n];
    for (i = 0; i < 2; i++) {
        cout<<"Elements "<<i+1<<" :";
        cin >> arr[i];
    }
    for(i=0;i<2;i++){
        cout<<arr[i]<<endl;
    }
    for (i=0;i<(n-2);i++){
        arr[i] = rand() % 100;
        cout <<arr[i] << endl;
    }
}