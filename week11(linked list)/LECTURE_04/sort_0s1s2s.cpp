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
        return;
    }
    //create node 
    node* newnode=new node(data);
    // connect newnode with linked list
    newnode->next=head;
    // head ko update kar do
    head=newnode;
    return;
}
void sort(node* &head){
    if(head == NULL){
        cout<<"linked list is empty !!!";
    }
    // if(head->next=NULL){
    //     return;
    // }
    int zeros=0;
    int ones=0;
    int twos=0;
    node* temp=head;
    while(temp != NULL){
        if(temp->data == 0){
        zeros++;  
    }
        else if(temp->data == 1){
        ones++;   
    }
        else{
        twos++;
    }
    temp=temp->next;
}
    //cout<<zeros<<" "<<ones<<" "<<twos<<" ";
    
    node* curr=head;
    while(zeros >0){
        curr->data=0;
        curr=curr->next;
        zeros--;
    }
    while(ones >0){
        curr->data=1;
        curr=curr->next;
        ones--;
    }
    while(twos >0){
        curr->data=2;
        curr=curr->next;
        twos--;
    }
}
void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* head=NULL;
    insertathead(head,1);
    insertathead(head,1);
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,0);
    insertathead(head,0);
    cout<<" linked list is:";
     print(head);
     sort(head);
     cout<<" sorted linked list :";
    print(head);
    return 0;

}