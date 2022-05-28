// 6.Implement priority queue.

#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>k;
    cout<<"Enter the array size:";
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Enetr the elements:" ;
        cin>>arr[i];
        k.push(arr[i]);
    }

    while(!k.empty())
    {
        int x;
        x = k.top();
        cout<<x<<endl;
        k.pop();
    }
    return 0;
}
