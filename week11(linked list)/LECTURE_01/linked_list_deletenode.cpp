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
    //write destructor here 
    ~node(){
        cout<<"node with value "<<" "<<this->data<<" delete"<<endl;

    } 

};

void inserthead(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode= new node(data);
        head=newnode;
        tail=newnode;
        cout<<"element inserted "<<data<<endl;
        return;
    }
    //step 1 create an new node
    node* newnode=new node(data);
    //connect the new node with linked list
    newnode->next=head;
    //step 3  new node ko h head declare kar do
    head=newnode;
    cout<<"element inserted "<<data<<endl;

}
void inserttail(node* &head,node* &tail,int data){
    if(head == NULL){
        node* newnode= new node(data);
        head=newnode;
        tail=newnode;
        cout<<"element inserted "<<data<<endl;
        
    return;
    }

    
    //step 1 create an new node
    node* newnode=new node(data);
    //connect the new node with tail
    tail->next=newnode;
    //step 3 
    tail=newnode;
    cout<<"element inserted "<<data<<endl;
}
int findlength(node* &head){
    int i=0;
    node* temp=head;
    while(temp != NULL){
        temp=temp->next;
        i++;
    }
    return i;
}
    void deleten(node* &head,node* &tail,int position){
    
    if(head == NULL){
        cout<<"linked list is empty !!!"<<endl;
    }
    if(position == 1){
        node* temp=head;

        head=head->next; 
        temp->next=NULL;
        delete temp ;
        return;
    }
    //find the length of string  
    int len=findlength(head);
    
    if(position == len){
        //find previous
        node* prev=head;
        int i=1;
        while(i < position-1 ){
            prev=prev->next;
            i++;
        }
        node* temp=prev->next;
        //step 2 previous k next ko NULL point kardo
        prev->next=NULL;
        //step 3 tail ko null k taraf point kardo
        temp->next=NULL;
        // step 4 tail ko prev par lado 
        tail=prev;
        //step 5 delete current node
        delete temp;
    }
    //step 1 find possition
    int i=1;
    node* prev=head;
    while(i < position-1){
        prev=prev->next;
        i++;
    }
    node* curr=prev->next;
    // previous k next ko current k next par point kardo 
    prev->next=curr->next;
    //
    curr->next=NULL;
    //
    delete curr;

     
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
    node* tail=NULL;

    inserthead(head,tail,1);
    inserthead(head,tail,2);
    inserthead(head,tail,3);
    inserthead(head,tail,4);
    inserthead(head,tail,5);
    inserttail(head,tail,6);
    inserttail(head,tail,8);
    inserttail(head,tail,7);
    inserttail(head,tail,9);
    print(head);

    int len=findlength(head);
    cout<<"length of linked list is "<<len<<endl;
    deleten(head,tail,2);
    print(head);


}