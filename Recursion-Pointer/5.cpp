#include<iostream>
using namespace std;
void pointerarray(int *arr,int s1,int s2)
{
    for(int i=0;i<s1;i++)
    {
        for(int j=0;j<s2;j++)

        {
            *(arr+i*s1+j)=rand()%10;
            cout<<*(arr+i*s1+j)<<" ";

        }
        cout<<endl;
    }
    //cout<<*arr[i][j];
}
int main()
{
    int r;
    cin>>r;
    int c;
    cin>>c;
    int arr[r][c];
    pointerarray(*arr,r,c);
    return 0;
}