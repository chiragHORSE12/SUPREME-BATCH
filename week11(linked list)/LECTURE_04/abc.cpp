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
        //cout<<" node deleted !!"<<endl;
    }
};
void insertathead(node* &head,int data){

    if(head == NULL){
        node* newnode=new node(data);
        head =newnode;
        return;
    }
    //step 1
    node* newnode=new node(data);
    //step2
    newnode->next=head; 
    //step3
    head=newnode;   
}

node* sort(node* &head){
    if(head == NULL){
        cout<<" linked list is empty !!!"<<endl;
    }
    if(head ->next == NULL){
        return head;
    }
    // 3 head bana do or 3 me value dal  do un k condition k basis par
    //create dummy node
    node* zerokahead=new node(-1);
    node* zerokatail=zerokahead;

    node* twokahead=new node(-1);
    node* twokatail=twokahead;

    node* onekahead=new node(-1);
    node* onekatail=onekahead;

    //traverse the linked list
    node* curr=head;
    while(curr != NULL){
        if(curr->data == 0){
            // take out nodehaving value 0
            node* temp=head;
            //curr age bada do 
            curr=curr->next;
            //temp ko NULL kardo
            temp->next =NULL;
            
            // join that node with appropriate node with simillar data
            zerokatail->next=temp;
            zerokatail=temp;

        }
        else if(curr->data == 1){
            // take out nodehaving value 0
            node* temp=head;
            curr=curr->next;
            temp->next =NULL;
            
            // join that node with appropriate node with simillar data
            onekatail->next=temp;
            onekatail=temp;
        }
        else if(curr->data == 2){
            // take out nodehaving value 0
            node* temp=head;
            curr=curr->next;
            temp->next =NULL;
            
            // join that node with appropriate node with simillar data
            twokatail->next=temp;
            twokatail=temp;
        }
    }

    //modify linked list
    node* temp=onekahead;
    onekahead=onekahead->next;
    temp->next=NULL;
    delete temp;
    //modify linked list
    temp=twokahead;
    twokahead=twokahead->next;
    temp->next=NULL;
    delete temp;
    //check karo k onehead emty to nhi ha

    if(onekahead != NULL){
        zerokatail->next=onekahead;
        //check karo twokahead empty to nhi h
        if(twokahead != NULL){
             zerokatail->next=twokahead;
             }
    }
    else{
        if(twokahead != NULL){
        zerokatail->next=twokahead;
        }
    }
    //onekahead k dummy node ko delete kar do
    temp=zerokahead;
    zerokahead=zerokahead->next;
    temp->next=NULL;
    delete temp;
    
    return zerokahead;
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
    insertathead(head,2);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,2);
    insertathead(head,1);
    insertathead(head,0);
    insertathead(head,0);
    cout<<"linked list is:";
    print(head);
    cout<<"sorted linked list is:";
    head=sort(head);
    //cout<<" sorted linked list is:";
    print(head); 
    return 0;
}