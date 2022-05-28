#include <iostream>
using namespace std;

int sumAllDigits(int n)
{
    if(n<10)
{
        return n;
    }
    int sum=0;
    while(n!=0)
{
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sumAllDigits(sum);
}
int main()
{
    int number;
    cout<<"Input number: ";
    cin>>number;
    cout<<"Answer = "<<sumAllDigits(number);
    return 0;
}