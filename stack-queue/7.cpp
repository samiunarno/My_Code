// 7.Assume, you maintain a list where any time an element can be inserted. Write a function
// that takes k as input and returns the kth largest element from the list.

#include <iostream>
#include <stack>
using namespace std;
void max(stack<int>s){
    int a = s.top();
    int b;
    while(!s.empty()){
        b=s.top();

        if(a<b){
            a=b;
        }
        s.pop();
    }
    cout<<"Largest k Element is  : "<<a<<endl;
}
void display(stack<int>(s)){
    while(!s.empty()){
        cout<<" "<<s.top();
        s.pop();
    }
    cout<<endl;
}
int main()
{
    int c,v;
    cout<<"Size of Stack : ";
    cin>>c;
    stack<int>s;
    for(int i=1;i<=c;i++){
        cout<<"Elements "<<i<<":";
        cin>>v;
        s.push(v);
    }
    cout<<"Elements :"<<endl;
    display(s);
    cout<<"Max is :"<<endl;
    max(s);
}