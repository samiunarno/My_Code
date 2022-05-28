#include <iostream>
using namespace std;
class node{
public:
    int data;
    node*next;
    node(int v){
        data=v;
        next= NULL;
    }
};
void insert(node*&head,int v){
    node*a=new node(v);
    if(head==NULL){
        head=a;
        return;
    }
    else{
        node*b=head;
        while(b->next!=NULL){
            b=b->next;
        }
        b->next=a;
    }
}
void display(node*head){
    node*a=head;
    while(a!=NULL){
        cout<<a->data<<"->";
        a=a->next;
    }
    cout<<"NULL"<<endl;

}
node* reverseRec(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    else{
        node* newhead=reverseRec(head->next);
        head->next->next=head;
        head->next=NULL;

        return newhead;
    }
}
node* rev(node*&head){
    node* prev=NULL;
    node*curr=head;
    node*nex;

    while(curr!=NULL){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return prev;
}
void inserthead(node*&head,int v){
    node*a=new node(v);
    a->next=head;
    head=a;
}
int main()
{
    node*head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    display(head);
    node*newhead=rev(head);
    display(newhead);
    return 0;
}