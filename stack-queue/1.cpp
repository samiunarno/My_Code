// 1.At first, implement the stack using an array. Assume, at any time, a character can be
// inserted/deleted from the stack. Also, implement a function that uses the stack to
// reverse the given string and return the reversed string.

#include <iostream>
using namespace std;
#define MAX 5
string stack[MAX];
int top = -1;
void push(string v){
    if(top<MAX){
        top++;
        stack[top]=v;
    }
    else{
        cout<<"Stack is Full"<<endl;
    }

}
void pop()
{
    if(top>=0){
        cout<<stack[top]<<" "<<"Poped"<<endl;
        top--;
    }
    else{
        cout<<"EMPTY";
    }
    cout<<"\n\n";
}
void display()
{
    if(top>=0){
        cout<<"Display : ";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
            cout<<endl;
        }
    }
    else{
        cout<<"Stack is Empty";
    }
}

void reverse(){
    if(top>=0){
        cout<<"Reverse Display  : "<<endl;
        for(int i=0;i<=top;i++){
            cout<<stack[i]<<" ";
            cout<<endl;
        }
    }
    else{
        cout<<"Stack is Empty"<<endl;
    }
}
int main()
{
    int c,l;
    string v;
    while(true){
        cout<<"1.PUSH"<<endl;
        cout<<"2.POP"<<endl;
        cout<<"3.DISPLAY"<<endl;
        cout<<"4.REVERSE DSPLAY"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"\n\n";
        cout<<"Enter Choice :"<<endl;
        cin>>c;

        cout<<"\n\n";
        if(c==1){
            cout<<"Enter How many Item want to Push :";
            cin>>l;
            for(int i=1;i<=l;i++){
                cout<<"Value For Push :";
                cin>>v;
                push(v);
            }
        }
        else if(c==2){
            pop();
        }
        else if(c==3){
            display();
        }
        else if(c==4){
            reverse();
        }
        else if(c==0){
            cout<<"Thanks For Visit"<<endl;
            return 0;
        }
        else{
            cout<<"You entered a Wrong Key"<<endl;
        }

    }
}