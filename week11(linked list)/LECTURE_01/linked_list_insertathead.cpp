#include<iostream>
using namespace  std;

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
//insert at head 
void insertathead(node* &head,int data){
    //step 1
    node* newnode=new node(data);
    //step2
    newnode->next=head;
    //step3
    head=newnode;
}


void print(node* head){
    node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* head=new node(10);
    
    insertathead(head,12);
    insertathead(head,14);
    insertathead(head,16);
    insertathead(head,18);

    cout<<"current linked list is :"<<endl;
    print(head);
    int i=getlength(head);
    // cout<<"the length of linked list is"
    return 0;
}