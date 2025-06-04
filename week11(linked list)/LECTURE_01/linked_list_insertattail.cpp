#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node*next;

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
} 
//insert new node at tail
void insertattail(node* &head,node* &tail,int data){
        if(head == NULL){
        node* newnode=new node(data);
        head =newnode;
        tail =newnode;
        return;
    }
    //step1 :create a new node
    node* newnode =new node(data);
    //step2:coonect new node with linked list
    tail->next=newnode;
    //step3: set tail to new node
    tail=newnode;
}
//insert at head 
void insertathead(node* &head,node* &tail,int data){

    if(head == NULL){
        node* newnode=new node(data);
        head =newnode;
        tail =newnode;
        return;
    }
    //step 1
    node* newnode=new node(data);
    //step2
    newnode->next=head; 
    //step3
    head=newnode;   
}


int main(){
    node* head=NULL; 
    node* tail=NULL;

    insertathead(head,tail,10);
    insertattail(head,tail,17);
    insertattail(head,tail,18);
    insertathead(head,tail,11);

    
    print(head);
    return 0;
}