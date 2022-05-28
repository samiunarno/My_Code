// 12.Write a program that counts the number of times each number occurs in an array.
#include <iostream>
using namespace std;
int c(int arr[], int n, int x)
{
    int r = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
            r++;
    return r;
}

int main()
{
    int a[] = {5, 7, 8, 8, 5, 8, 7, 7};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "Original array: ";
    cout<<"\n";
    for (int i=0; i < n; i++)
        cout << a[i] <<" ";
    int x;
    cout<<"\n";
    cout<<"Enter a Number to Search :";
    cin>>x;
    cout <<"\nNumber of occurrences of : " << c(a, n, x);
    return 0;
}
