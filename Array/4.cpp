// 4.Ask the user to enter the size of an array. Create an integer array of the given size and
// fill it with random numbers. Print the array, then take another number from the user and
// search that number in the array. If the value is found, print the indices (plural of index)
// where the value was found. Also print how many times the value was found in the array.
#include <iostream>
using namespace std;
int main()
{
    int s,i,c;
    cout<<"Size of an Array : ";
    cin>>s;

    int arr[s];

    for(i=0;i<s;i++) {

        cin>> arr[i];
    }
    for(i=0;i<s;i++) {

        cout<< arr[i]<<" ";
    }
    cout<<"\n";
    cout<<"Enter the Searching Number :";
    cin>>c;
    for(i=0;i<s;i++){
        if(arr[i]==c){
            cout<<"Number Found Successfully"<<endl;
            cout<<"index is :"<<i;
            break;
        }
        if(i==s){
            cout<<"Element Not Present";
        }
    }
}