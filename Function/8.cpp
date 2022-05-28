#include<iostream>
using namespace std;
int lcm(int a, int b) {
    if (b == 0)
        return a;
    return lcm(b, a % b);
}
int main() {
    int a ,b;
    cout<<"Enter 1st :";
    cin>>a;
    cout<<"Enter 2nd :";
    cin>>b;
    cout<<"LCM of "<< a <<" and "<< b <<" is "<< (a*b)/lcm(a, b);
}