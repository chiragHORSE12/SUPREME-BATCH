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

void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode=new node(data);
        head=newnode;
        tail=newnode;
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
node* reverse(node* &prev,node* &curr){
    //base case 
    if(curr == NULL){
        return prev;
    }
    // 1 case solve ho gya 
    node* forward=curr->next;
    curr->next=prev;


    //recursib=ve call
    reverse(curr,forward);

}
node* reverse_loop(node*head){
    node* curr=head;
    node* backward=NULL;
    
    while(curr != NULL){
        node* forward=curr->next;
        curr->next=backward;
        backward=curr;
        curr=forward;
        
    }
    return backward;
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    
    insertathead(head,tail,20);
    insertathead(head,tail,40);
    insertathead(head,tail,60);
    insertathead(head,tail,80);
    insertathead(head,tail,100);
    print(head);
    node* prev=NULL;
    node* curr=head;
    head=reverse_loop(head);
    print(head);
}