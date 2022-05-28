// 2.At first, implement the circular queue using an array. Assume, at any time, a character
// can be inserted/deleted from the queue. Also, implement a function that uses the
// circular queue to reverse the given string and return the reversed string.

#include <iostream>
using namespace std;
#define MAX 5
string queue[MAX];
int front = -1;
int rear = -1;
void enq(string v){
    if(front==-0 && rear==MAX-1){
        cout<<"Queue is Full \n\n";
    }
    else if (front==-1 && rear==-1){
        front=0;
        rear=0;
        queue[rear]=v;
    }
    else if (rear==MAX-1){
        rear=0;
        queue[rear]=v;
    }
    else{
        rear++;
        queue[rear]=v;
    }

}
void deq()
{
    if(front==-1 && rear==-1){
        cout<<"EMPTY!! \n\n";
    }
    else if(front==rear){
        cout<<"Deleted Item is :"<<queue[front]<<"\n\n";
        front=-1;
        rear=-1;
    }
    else if(front==MAX-1){
        cout<<"deleted Item is :"<<queue[front]<<"\n\n";
        front=0;
    }
    else{
        cout<<"Deleted item is :"<<queue[front]<<"\n\n";
        front++;
    }
}
void peek() {
    if (front == - 1)
        cout<<"EMPTY"<<endl;
    else {
        cout<<"Type elements are : "<<endl;
        for (int i = front; i <= rear; i++)
            cout<<queue[i]<<endl;
        cout<<endl;
    }
}
void reverse() {
    if (front == - 1)
        cout<<"EMPTY"<<endl;
    else {
        cout<<"Type elements are : "<<endl;
        for (int i = rear; i >= front; i--)
            cout<<queue[i]<<endl;
        cout<<endl;
    }
}
int main()
{
    int c,l;
    string v;
    while(true){
        cout<<"1.Inser"<<endl;
        cout<<"2.Delete"<<endl;
        cout<<"3.Show"<<endl;
        cout<<"4.REVERSE "<<endl;
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
                enq(v);
            }
        }
        else if(c==2){
            deq();
        }
        else if(c==3){
            peek();
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

