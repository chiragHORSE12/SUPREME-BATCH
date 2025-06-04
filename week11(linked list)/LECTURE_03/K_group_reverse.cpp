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
    }

    node* newnode=new node(data);
    newnode->next=head;
    head=newnode;
}

node* getmiddle(node* &head){
    
    if(head == NULL){
        cout<<" linked list is empty "<<endl;

    }
    if(head ->next == NULL){
        return head;
    }
    node* slow=head;
    node* fast=head->next;
    while(slow != NULL & fast != NULL){
        fast=fast->next;
           if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
           }
    }
    return slow;
}
int getlength(node* &head){
    node* temp =head;
    int i=0;
    while(temp != NULL){
        temp=temp->next;
        i++;
    }
    return i;
}

 node* reverseknode(node* &head,int k){
    if(head == NULL){
        cout<<"linked list is empty !!!"<<endl;
    }

    int len=getlength(head);
    cout<<len<<endl;
    if(k > len){
        // length of linked list is samller than thee value of k
        // cout<<" enter valid value of k!!!"<<endl;
        return head;
    }
    //step 1:
    node* prev=NULL;
    node* curr=head;
    node* forward=curr->next;
    int count =0;
    while( k > count){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward != NULL){
    //step 2:   k group m reverse keye hue node kon age walwe se jod do bhai
    head->next=reverseknode(forward,k);
    }

    //step 3: previous de do jo k head h reverse kar n k bad
    return prev;
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

    insertathead(head,10);
    insertathead(head,20);
    insertathead(head,31);
    insertathead(head,101);
    insertathead(head,110);
    insertathead(head,120);

    cout<<"middle node is : "<<getmiddle(head)->data<<endl;
    print(head);
    int k;
    cout<<endl<<"enter the value of k :"<<endl;
    cin>>k;
    head=reverseknode(head,k);
    print(head);
    return 0;
}