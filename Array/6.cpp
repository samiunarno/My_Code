// 6.Create an integer array of size 10. Fill the array by taking input from the user. Then,
// check whether the array is sorted or not. If sorted, then, how it is sorted (ascending or
// descending). If it is not sorted, print that it is not sorted.

#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Size is :";
    cin>>a;
    int arr[a], i, m=0, n=0;
    for(i=0; i<a; i++)
    {
        cin >> arr[i];
    }
    for(i=0; i<a; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for(i=0; i<a-1; i++)
    {
        if(arr[i]<arr[i+1])
        {
            m++;
        }
    }
    for(i=0; i<a-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            n++;
        }
    }

    if(m==a-1)
    {
        cout << "Ascending order";
    }
    else if(n==a-1)
    {
        cout << "Decending order";
    }
    else
    {
        cout << "Not sorted";
    }
}