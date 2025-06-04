#include<iostream>
using namespace std;

class NODE{

    public:
    int data;
    NODE* next;
     NODE(){
        this->data=0;
        this->next=NULL;
     }
     NODE(int data){
        this->data=data;
        this ->next=NULL;
     }

};
void print(NODE* head){
    NODE* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    NODE* first = new NODE(10);
    NODE* second =new NODE(20);
    NODE* third = new NODE(30);
    NODE* fourth =new NODE(40);

    first->next=second;
    second->next=third;
    third->next=fourth;

    cout<<"printing the linked list"<<endl;
    print(first);

    return 0;

}