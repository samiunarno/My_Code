// 1.Fill an array with integers (any size) with user input and print the array forwards and
// backwards.
#include <iostream>
using namespace std;
int main()
{
    int a,i;

    cout<<"Enter Size of Arrays :";
    cin>>a;

    int arr[a];

    for(i=0;i<a;i=i+1){
        cout<<"Elements are "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"Forward :";
    for(i=0;i<a;i=i+1){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Backward :";
    for(i=(a-1);i>=0;i--){
        cout<<arr[i]<<" ";
    }
}