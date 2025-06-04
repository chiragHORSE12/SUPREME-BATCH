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
void insertathead(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode= new node(data);
        head =newnode;
        tail=newnode;
        return;
    }
    //step 1:create a new node
    node* newnode=new node(data);
    //step 2 connect node to kinked list
    newnode->next=head;
    //step 3 point head to newnode
    head=newnode;
}
void insertattail(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode =new node(data);
        head=newnode;
        tail=newnode;
        return;
    }
    //step 1: create a newnode
    node* newnode=new node(data);
    //step 2:connect new node tolinked list
    tail->next= newnode;
    //step 3
    tail=newnode;
}
int findlength(node* &head){
    int i=0;
    node* temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
        i++;
    }
    return i;
    
}

void insertatposition(int data,int position,node* &head,node* &tail){
    if(head == NULL){
        node* newnode= new node(data);
        head =newnode;
        tail=newnode;
        return ;
    }
    if(position == 0){
        insertathead(head,tail,data);
        return;
    }
    int length=findlength(head); 

    if(position >= length){
        insertattail(head,tail,data);
        return ;
    }
    // step 1:find the position 
    int i=1;
    node* prev=head;
    while(i < position){
        prev=prev->next;
        i++;
    }
    node*curr=prev->next;

    //step 2 create a node 
    node* newnode=new node(data);
    //step 3 new node k next ko curr par point karo
    newnode->next=curr;
    //step 4 prev k next ko new node par point kardo
    prev->next=newnode;

}
void print(node* &head){
    node* temp=head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* head =NULL;
    node* tail=NULL;

    insertathead(head,tail,17);
    insertathead(head,tail,76);
    insertathead(head,tail,54);
    insertathead(head,tail,22);
    insertathead(head,tail,123);
    insertattail(head,tail,647);
    insertattail(head,tail,6);
    insertattail(head,tail,47);
    insertattail(head,tail,67);
    insertatposition(101,7,head,tail);
    print(head);
    cout<<endl;
    cout<<" head :"<<head->data<<endl;
    cout<<" tail :"<<tail->data<<endl;
    return 0;

}