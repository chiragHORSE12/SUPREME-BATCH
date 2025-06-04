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

    ~node(){
        cout<<"node has been deleted with data :"<<this->data<<endl;
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
void remove_duplicate(node* &head){
    if(head == NULL){
        cout<<" linked list is empty!!!"<<endl;
        return;
    }
    if(head ->next == NULL){
        cout <<" one node present in linked list !!"<<endl;
        return;

    }
    // node >1 
    node*curr=head;
    while(curr !=NULL){
        if((curr->next != NULL)&& (curr->data == curr->next->data)){
        //equal
        //ek or naya pointer temp kar k jes k through delete karege
        node* temp=curr->next;

        curr->next=curr->next->next;
        //distructor
        temp->next=NULL;
        delete temp;
        }
        else{
        curr=curr->next;
        }
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
    insertathead(head,10);
    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,30);
    insertathead(head,40);
    insertathead(head,40);
    cout<<"current linked list :";
    print(head);
    remove_duplicate(head);
    cout<<"after remove duplicate:";
    print(head);
    return 0;
}