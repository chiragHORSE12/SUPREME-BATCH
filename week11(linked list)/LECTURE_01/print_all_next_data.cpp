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
void printnext(node* head){
    node* temp=head;

    while(temp->next != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    node* first=new node(10);
    node* second=new node(15);
    node* third=new node(20);
    node* fourth=new node(25);
    node* fifth=new node(30);
    node* sixth=new node(35);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth; 


    
    cout<<"printing all the next element "<<endl;
    printnext(third);

}