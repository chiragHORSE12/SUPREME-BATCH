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
 node* middle(node* &head){
    if(head == NULL){
        cout<<"empty linked list ha !!!1"<<endl;
    }
    if(head ->next == NULL){
        return head;
    }
    node* slow=head;
    node* fast=head;

    while(fast != NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
 }
 void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* reverse(node* reverseka){
    node* prev=NULL;
    node* curr=reverseka;
    //node* forward;
    while(curr != NULL){
        node* forward=curr->next;
        curr->next=forward;
        prev=curr;
        curr=forward;
    }
    return prev;
}
 bool  palindrome(node* &head,node *reversekahead){
    if(head == NULL){
        cout<<"empty linked list ha !!!1"<<endl;
    }
    node*temp1=head;
    node*temp2 =reverse(reversekahead);
    if(temp1->data == temp2->data){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    else{
        return false;
    }
    return true;
}
int main(){
    node*head=NULL;
    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,40);
    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);
    node* mid=middle(head);

    cout<<"entered linked list  is palindrome :"<<palindrome(head,mid->next)<<endl;
    return 0;
}