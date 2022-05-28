// 11.Convert a decimal number to binary number.

#include <iostream>
using namespace std;
int main()
{
    int i,c;
    int arr[10];
    cout<<"Enter the Number :";
    cin>>c;
    for(i=0;c>0;i++){
        arr[i]=c%2;
        c=c/2;
    }
    cout<<"Binary of Given :";
    for(i=i-1;i>=0;i--){
        cout<<arr[i];
    }


}