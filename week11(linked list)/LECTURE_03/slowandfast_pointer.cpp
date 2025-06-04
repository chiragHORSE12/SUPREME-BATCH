#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=data;
        this->next=NULL;

    }
};

void insertathead(node* &head,int data){
    if(head == NULL){

        node* newnode=new node(data);
        head=newnode;
    }

    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}

node* getmiddle(node* &head){
    
    if(head == NULL){
        cout<<" linked list is empty "<<endl;

    }
    if(head ->next == NULL){
        return head;
    }
    node* slow=head;
    node* fast=head->next;
    while(slow != NULL & fast != NULL){
        fast=fast->next;
           if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
           }
    }
    return slow;
}

int main(){
    node* head=NULL;

    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,31);
    insertathead(head,101);
    insertathead(head,110);
    insertathead(head,120);

    cout<<"middle node is : "<<getmiddle(head)->data<<endl;
    return 0;
}