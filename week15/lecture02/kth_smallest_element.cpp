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

node* insertintobst(node* &root,int data){
    if(root == NULL){
        root =new node(data);
        return root;
    }

    if(root ->data > data) {
        root->left=insertintobst(root->left,data);
    }
    else{
        root->right=insertintobst(root->right,data);
    }
    return root;
}

void takeinput(node* &root){
    int data;
    cout<<"enter the data for the BST :"<<endl;
    cin>>data;

    while(data != -1){
        root=insertintobst(root,data);
        cin>>data;
    }
}

void  kthnode(node* &root,int &k){
    if(root == NULL){
        return;
    }
    // left part of tree k leye call
    kthnode(root->left,k);
    //root pf the tree 
    k--;
    cout<<k<<endl;
    if(k==0){
        cout<<"the kth samllest element is :"<<root->data;
        return ;
    }
    //right part of tree k leye call
    kthnode(root->right,k);
}

int main(){
    node* root=NULL;
    takeinput(root);
    int k=4;
    kthnode(root,k);
    return 0;
}