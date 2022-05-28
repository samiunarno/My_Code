#include <iostream>
using namespace std;
int sumdigit(int n,int n1){
    int sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,n1,sum=0;
    cout<<"Sum of digit :"<<endl;
    cout<<"Input by User :";
    cin>>n;
    n1=n;
    cout<<"Sum of digit is :"<<sumdigit(n,n1)<<endl;
}