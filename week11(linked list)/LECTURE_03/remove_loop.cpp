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

// void insertathead(node* &head,int data){
//     if(head == NULL){
//         cout<<" linked list is empty "<<endl;
//     }

//     node* newnode=new node(data);
//     newnode->next=head;
//     head=newnode;
// }

node* startpoint(node* &head){
    if(head == NULL){
        cout<<"linked list is empty !!!!"<<endl;
    }
    node* slow=head;
    node* fast=head;
    // slow or fast dono ko meet kara doo 
    while( fast !=NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        //slow ko head par dal do or ek ek step dono ko age bada do
        if(slow == fast){
            slow=head;
            break;
            while(slow != fast)
            slow=slow->next;
            fast=fast->next;
        }
    }

    while(slow != fast){
            slow=slow->next;
            fast=fast->next;
        }
    return slow;

}
void removeloop(node* &head){
    if(head == NULL){
        cout<<"linked list is empty !!!!"<<endl;
    }
    node* slow=head;
    node* fast=head;
    // slow or fast dono ko meet kara doo 
    while( fast !=NULL){
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
            slow=slow->next;
        }
        //slow ko head par dal do or ek ek step dono ko age bada do
        if(slow == fast){
            slow=head;
            break;
        }
    }
    
    node* prev=fast;
    while(slow != fast){
            prev=fast;
            slow=slow->next;
            fast=fast->next;
        }
        prev->next=NULL;
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
    ninth->next=fifth;

    cout<<" starting point of loop is: "<<startpoint(head)->data<<endl;
    removeloop(head);

    print(head);  
    return 0;
}