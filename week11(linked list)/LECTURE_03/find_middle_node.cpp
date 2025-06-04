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
        //LL is empty
        node* newnode=new node(data);
        head=newnode;
        return;
    }
    //LL is non -empty
    //step 1: create newnode
    node* newnode=new node(data);
    //step 2:
    newnode->next=head;
    //step 3:
    head=newnode;
}
int getlength(node* &head){
    node* temp=head;
    int i=0;
    while(temp != NULL){
        temp=temp->next;
        i++;
    }
    return i;
}

int main(){
    node* head=NULL;
    insertathead(head,10);
    insertathead(head,15);
    insertathead(head,20);
    insertathead(head,23);
    insertathead(head,42);
    //insertathead(head,14);
    
    int len=getlength(head);
    //cout<<"total length is "<<len<<endl;
    node*temp=head;
    if( len % 2 == 0){
        len=len/2; 
        int i=1;
        while(len > i){
            temp=temp->next;
            i++;
        }
        cout<<" middle node is :"<< i<<endl;
        cout" data store at that node is "<<temp->data<<endl;

    }
    else{
        int i=1;
        len=(len+1)/2;
        //cout<<len<<endl;
        while(len > i){
        temp=temp->next;
        i++;
        }
        cout<<" middle node is :"<< i<<endl;
        cout<<" data store at that node is "<<temp->data<<endl;    
    }
    return 0;
}
