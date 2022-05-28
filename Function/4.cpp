#include <iostream>
using namespace std;
int countnumber(int a){
    int c=0;
    while(a!=0){
        a=a/10;
        c++;
    }
    return c;
}
int main(){
    int a;
    cout<<"Enter Number :";
    cin>>a;
    cout<<"Entered Numbers Digit :"<<countnumber(a);
}
