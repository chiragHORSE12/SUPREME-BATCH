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

     ~NODE(){
        cout<<" the deleted node data is :"<<this->data<<endl;
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
int getlength(NODE* &head){
    int i=0;
    NODE* temp =head;
    while(temp != NULL){
        temp=temp->next;
        i++;
    }
    return i;
}

void deletenode(NODE* &head,NODE* &tail,int position){
    if(head == NULL){
        cout<<" linked list is empty!!"<<endl;
        return;
    }
    if(position == 1){
        //step 1: create new node 
        NODE* temp=head;
        //step 2: move head to nect of head
        head=head->next;
        //step 3: head ka prev ko NULL par point kardo
        head->prev=NULL;
        //step 4: temp ke next ko NULL par point kardo 
        temp->next=NULL;
        //step 5: delete kar do temp wale node ko
        delete temp;

    }
    int len=getlength(head); 
    if(position == len){
        //step 1:crete a node pointer temp
        NODE *temp=tail;
        //step 2:til ko peche wale node par laga do
        tail=temp->prev;
        //tail ke next ko NULL kar do link todne k leye
        tail->next=NULL;
        //temp k prev ko NULL kar do link todne k leye
        temp->prev=NULL;
        // delete kar do node ko
        delete temp;

    }
    //delete the node from any position
    //step 1: find the position of left  curr & right 
    int i=1;
    NODE* left=head;

    while(position-1 > i){
        left=left->next;
        i++;
    }
    NODE* curr=left->next;
    NODE* right=curr->next;
    //connecting and disconnecting the node 
    left->next=right;
    right->prev=left;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
    return ;
    
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
    
    deletenode(head,tail,4);
    cout<<"printing the linked list"<<endl;
    print(head);

    return 0;
}
