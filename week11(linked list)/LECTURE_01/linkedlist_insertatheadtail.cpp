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
            node* newnode=new node(data);
            head=newnode;
            tail=newnode;
            return;
        }
        //step 1 create new node
        node* newnode=new node(data);
        //step 2 add new node to linked list
        newnode->next=head;
        //step3 move head to new node
        head=newnode;
    }
void insertattail(node* &head,node* &tail,int data){
        if(head == NULL){
            node* newnode=new node(data);
            head=newnode;
            tail=newnode;
            return;
        }
        //step 1 :create neew node
        node* newnode=new node(data);
        //step 2 add new node to linked list 
        tail->next=newnode;
        //step 3 set tail to new node
        tail=newnode;

}
int findength(node* &head){
    int i=0;
    node* temp=head;
    while(temp !=NULL){
        temp=temp->next;
        i++;
    }
    return i;
    
}

void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* head=NULL;
    node* tail=NULL;

    insertathead(head,tail,23);
    insertattail(head,tail,3);
    insertathead(head,tail,2);
    insertattail(head,tail,12);
    insertathead(head,tail,41);
    cout<<"current linked list is :"<<endl;
    print(head);
    cout<<endl;
    int len=findength(head);
    cout<<"length ofcurrent linked list is"<< " "<<len<<endl;

}