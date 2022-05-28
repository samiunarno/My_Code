// 10.Find how many prime numbers are there in an array.
#include <iostream>
using namespace std;
int main()
{
    int n,i,j,p;
    int arr[n];

    cout<<"Enter Size of an Array :";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"All Prime :";
    for(i=0;i<n;i++){
        j=2;
        p=1;
        while(j<arr[i]){
            if(arr[i]%j==0){
                p=0;
                break;
            }
            j++;
        }
        if(p==1){
            cout<<arr[i]<<" ";
        }
    }
}