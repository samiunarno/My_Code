// 3.You are given three kinds of parenthesis expressions. Write a function that checks
// whether the given expression is right or not.

#include <iostream>
#include <stack>
using namespace std;
bool check(string v){
    stack<char>s;
    char x;
    int a = v.length();
    for(int i=0; i<a; i++ ){
        x=v.at(i);
        if(s.empty()){
            s.push(x);
        }
        else if(s.top()=='(' && x==')' || s.top()=='{' && x=='}' || s.top()=='[' && x==']'){
            s.pop();
        }
        else{
            s.push(x);
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string v;
    cout<<"Enter Brackets 1 :"<<endl;
    cin>>v;
    bool b1 = check(v);
    if(b1){
        cout<<"Right"<<endl;
    }
    else{
        cout<<"Wrong"<<endl;
    }
}