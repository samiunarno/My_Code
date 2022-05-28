#include<iostream>
using namespace std;
void hcf(int,int);

int main()
{
    int a,b;
    cout<<"Enter 1st number :";
    cin>>a;
    cout<<"\nEnter 2nd number :";
    cin>>b;

    hcf(a,b);

}
void hcf(int a,int b)
{
    int m,n;
    m=a;
    n=b;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }

    cout<<"HCF "<<a<<" and"<<" "<<b<<" "<<"is ::"<<m<<endl;
}