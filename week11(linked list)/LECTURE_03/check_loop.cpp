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
 
bool checkll(node* &head){
    if(head == NULL){
        cout<<"linked list empty hai"<<endl;
        return false;
    }
    node* fast=head;
    node* slow=head;
    while(fast != NULL){
        fast=fast->next;

        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow == fast){
            // loop present h linked list me
            return true;
        }

    }
    return false;
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
    node* head=new node(10);
    node* second=new node(20);
    node* third=new node(30);
    node* fourth=new node(40);
    node* fifth=new node(50);
    node* sixth=new node(60);
    node* seventh=new node(70);
    node* eight=new node(80);
    node* ninth=new node(90);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;
    eight->next=ninth;

    ninth->next=fourth;
    cout<<"loop is present or not :"<<checkll(head)<<endl;
    //print(head);
    return 0;
}