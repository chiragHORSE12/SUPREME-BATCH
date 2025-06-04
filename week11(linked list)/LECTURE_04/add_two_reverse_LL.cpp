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
node* reverse(node*head){
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
void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
node* solve(node* head1,node*head2){
    //reverse both linked list
    head1=reverse(head1);
    head2=reverse(head2);

    //add linked list
    node* anshead=NULL;
    //node* anstail=NULL;
    int carry=0;

    while(head1 != NULL && head2 != NULL){
        //calculate sum 
        int sum=carry+head1->data + head2->data;
        //calculate digit
        int digit=sum%10;
        //calculate  carry of the sum
        carry=sum/10;
        //store the value of sum 
        insertathead(anshead,digit);
        // move node to next node
        head1=head1->next;
        head2=head2->next;
    }
    if(head1 != NULL){
        insertathead(anshead,head1->data);
    }
    if(head2 != NULL){
        insertathead(anshead,head2->data);
    }
    return anshead;

}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    insertathead(head1,4);
    insertathead(head2,4);
    insertathead(head1,2);
    insertathead(head2,3);
    insertathead(head2,2);
    insertathead(head2,1);
    insertathead(head1,1);
    //insertathead(head1,2);
    cout<<"first linked list is : ";
    print(head1);
    cout<<" second linked list is :";
    print(head2);

    node* ans=solve(head1,head2);
    cout<<"sum of two linked list is :";
    print(ans);
    return 0;

}
