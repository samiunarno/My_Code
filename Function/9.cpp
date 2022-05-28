#include <iostream>
using namespace std;
bool primeornot(int);
int palindrome(int n){
    int t,r,rev=0;
    t=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n /=10;
    }
    if(rev==t){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    int n;
    cout<<"Enter a  Integer :";
    cin>>n;

    if(primeornot(n)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }
    if(palindrome(n)==0){
        cout<<"Palindrome Number ";
    }
    else{
        cout<<"Not Palindrome";
    }
}
bool primeornot(int n){
    bool p = true;
    if(n==0||n==1){
        p= false;
    }
    for(int i=2;i<=n/2;++i){
        if(n%i==0){
            p= false;
            break;
        }
    }
}
