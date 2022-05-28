// 8.Fill an integer array with random numbers. Separate the even numbers and store them
// in an array named evenArray and odd numbers in another array named oddArray. Print
// all three arrays.

#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter the Size of Array :";
    cin>>n;
    int arr[n];
    int eve[10];
    int odd[10];
    int even = 0;
    int od = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            eve[even++]=arr[i];
        }
        else{
            odd[od++]=arr[i];
        }
    }
    cout<<"Original Array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Even Array :"<<endl;
    for(int i=0;i<even;i++){
        cout<<eve[i]<<" ";
    }
    cout<<"\n";
    cout<<"ODD Array :"<<endl;
    for(int i=0;i<od;i++){
        cout<<odd[i]<<" ";
    }

}