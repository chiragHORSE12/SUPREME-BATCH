#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

 node*insertintobst(node* root,int data){
    if(root == NULL){
        root =new node(data);
        return root ;
    }
    if(data > root->data){
        root->right=insertintobst(root->right,data);
        
    }
    else{
        root->left=insertintobst(root->left,data);
    
    }
    return root;

}
void takeinput(node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root=insertintobst(root,data);
        cin>>data;
    }
}
void inordertraversal(node* root){
    if(root == NULL){
        return;
    }
    // left part of tree k leye call
    inordertraversal(root->left);
    //printing data
    cout<<root->data<<" ";
    //right part of tree k leye call
    inordertraversal(root->right);
}
void preordertraversal(node* root){
    if(root == NULL){
        return;
    }
    //printing data
    cout<<root->data<<" ";
    // left part of tree k leye call
    inordertraversal(root->left);
    //right part of tree k leye call
    inordertraversal(root->right);
}
int min(node* &root){
    if(root == NULL){
        return -1;
    }
    node* temp=root;
    while(temp->left != NULL){
        temp=temp->left;
    }
    return temp->data;
}

int max(node* &root){
    if(root == NULL){
        return -1;
    }
    node* temp=root;
    while(temp->right!= NULL){
        temp=temp->right;
    }
    return temp->data;
}

int main(){
    node* root=NULL;
    cout<<"Enter the data for BST tree :"<<endl;
    takeinput(root);
    cout<<"printing tree in inorder traversal :"<<endl;
    inordertraversal(root);
    cout<<endl<<"printing tree in preorder traversal :"<<endl;
    preordertraversal(root);
    cout<<endl<<"the minimum element in the BST is :"<<min(root)<<endl;
    cout<<endl<<"the maximum element in the BST is :"<<max(root)<<endl;

    return 0;
}