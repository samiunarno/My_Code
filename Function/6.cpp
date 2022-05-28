#include <iostream>
using namespace std;
int reversenumb(int n){
    int n1 = 0;
    while(n>0){
        n1=n1*10+n%10;
        n=n/10;
    }
    return n1;
}
int main()
{
    int n;
    cout<<"Enter Digit of Numbers :";
    cin>>n;
    cout<<"Reverse Number is :"<<reversenumb(n)<<endl;
}
