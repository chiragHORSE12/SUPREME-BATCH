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
        cout<<" linked list is empty "<<endl;
    }

    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}
 void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
 }
 bool iscircular(node* &head){
    if(head == NULL){
        cout<<" linlked list is empty"<<endl;
        return true;
    }
    node* temp=head->next;

    while(temp != NULL && temp != head)
    {
        temp=temp->next;
    }
    if(temp == head){
            return true;
        }
    else{
        return false;
    }
}

 int main(){
    node* head=NULL;

    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,50);
    insertathead(head,60);
    insertathead(head,70);

    if(iscircular(head)){
        cout<<"linked list is singly linked list !!!"<<endl;

    }
    else{
        cout<<"linked list is circular linked list !!!!"<<endl;
    }


 }