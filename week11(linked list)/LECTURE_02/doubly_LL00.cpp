#include<iostream>
using namespace std;

class NODE{

    public:
    int data;
    NODE* next;
    NODE * prev;
    NODE* tail;
     NODE(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
     }
     NODE(int data){
        this->data=data;
        this ->next=NULL;
        this->prev=NULL;

     }

};
void print(NODE* head){
    NODE* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(NODE* &head,NODE* &tail,int data){
    if(head == NULL){
        //LL is empty
        NODE* newnode=new NODE(data);
        head=newnode;
        tail=newnode;
        return;
    }
    //LL is non -empty
    //step 1: create newnode
    NODE* newnode=new NODE(data);
    //step 2:
    newnode->next=head;
    //step 3:
    head->prev=newnode;
    //step 4:
    head=newnode;
}

int main(){
    NODE* first = new NODE(10);
    NODE* second =new NODE(20);
    NODE* third = new NODE(30);
    NODE* fourth =new NODE(40);
    NODE* head=first;
    NODE* tail=fourth;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    third->next=fourth;
    fourth->prev=third;


    cout<<"printing the linked list"<<endl;
    print(head);
    cout<<"printing the linked list"<<endl;
    insertathead(head,tail,5);
    print(head);

    return 0;

}