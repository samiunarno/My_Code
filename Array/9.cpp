// 9.Take a number from the user. Create an array of that size. Fill the array with Fibonacci
// series. Print the array.

#include <iostream>
using namespace std;
int main()
{
    int n,i;

    cout<<"Size of Array :";
    cin>>n;

    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<n<<" "<<"Fibonacci Series are :"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}