//yes, I am stisfied  using sizeof function.
#include<iostream>
using namespace std;
void storeodd(int *arr,int n)
{

    cout<<"Odd numbers:";
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }

    }

}
int main()
{
    int arr[]={10,20,5,3,5,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    storeodd(arr,n);
    return 0;
}