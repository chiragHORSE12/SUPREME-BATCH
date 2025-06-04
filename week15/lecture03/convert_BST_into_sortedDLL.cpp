#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node* insertintobst(node* root,int data){
    if(root ==NULL){
        root=new node(data);
        return root;
    }
    if(root->data  > data){
        root->left=insertintobst(root->left,data);
    }
    else{
        root->right=insertintobst(root->right,data);
    }
    return root;

}

void takeinput(node* root){
    int data;
    cout<<"Enter the  data for the node : "<<endl;
    cin>>data;

    while(data != -1){
        root=insertintobst(root,data);
        cin>>data;
    }
    return ;
}

void convertintoDLL(node* root,node* &head){
    if(root ==NULL){
        return ;
    }
    //right k leye call maro
    convertintoDLL(root->right,head);

    //attach root node  
    // age wala pointer k leye
    root->right=head;
    if(head != NULL){
        //peche wala pointer k leye 
        root->left=root;
    }
    // update head 
    head=root;
    //left k leye call maro
    convertintoDLL(root->left,head);
}
void traversell(node* head){
    node* temp=head;
    while(head != NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}

int main(){
     node* root=NULL;
     takeinput(root);
    node*head=NULL;
    convertintoDLL(root,head);
    cout<<" check the doublly linked list :"<<endl;
    traversell(head);
return 0;
}