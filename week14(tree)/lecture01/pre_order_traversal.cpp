#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

node* buildtree(){
    int data;
    cout<<"enter the value of root node:";
    cin>>data;

    if(data == -1){
        return NULL;
    }
    node* root=new node(data);

    cout<<"enter the value for left part of "<<data<<"node "<<endl;
    root->left = buildtree();

    cout<<"enter the value for right part of "<<data<<"node "<<endl;
    root->right = buildtree();
    
    return root;
}

void preordertraversal(node* root){
    if(root == NULL){
        return;
    }

    //printing data
    cout<<root->data<<" ";

    // left part of tree k leye call
    preordertraversal(root->left);
    
    //right part of tree k leye call
    preordertraversal(root->right);
}

int main(){
    node* root=NULL;
    root=buildtree();

    preordertraversal(root);
    return 0;
}