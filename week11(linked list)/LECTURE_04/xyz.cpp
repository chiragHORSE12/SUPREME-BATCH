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
        cout<<"node deleted !!"<<endl;
    }
    
};
void insertathead(node* &head,node* &tail,int data){

    if(head == NULL){
        node* newnode=new node(data);
        head =newnode;
        tail =newnode;
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
            //Head age bada do 
            head=head->next;
            //temp kom NULL kardo
            temp->next =NULL;
            
            // join that node with appropriate node with simillar data
            zerokatail->next=temp;
            zerokatail=temp;
            //cout<<" hello"<<"  ";
            }
        else if(curr->data == 1){
            // take out nodehaving value 0
            node* temp=head;
            head=head->next;
            temp->next =NULL;

            // join that node with appropriate node with simillar data
            onekatail->next=temp;
            onekatail=temp;
            //cout<<" hello"<<"  ";
        }
        else if(curr->data == 2){
            // take out nodehaving value 0
            node* temp=head;
            head=head->next;
            temp->next =NULL;

            // join that node with appropriate node with simillar data
            twokatail->next=temp;
            twokatail=temp;
            //cout<<" hello"<<"  ";
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
    insertathead(head,tail,0);
    insertathead(head,tail,2);
    insertathead(head,tail,1);
    insertathead(head,tail,2);
    insertathead(head,tail,2);
    insertathead(head,tail,1);
    insertathead(tail,tail,0);
    insertathead(head,tail,0);
    print(head);
    head=sort(head);
    print(head);
    return 0;
}