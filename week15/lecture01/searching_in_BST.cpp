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

bool presentinbst(node* &root,int element){
    if(root == NULL){
        return false;
    }
    if(root->data == element){
        return true;
    }
    if(root->data > element){
        presentinbst(root->left,element);
    }
    else{
        presentinbst(root->right,element);
    }
}
int main(){
    node* root=NULL;
    cout<<"Enter the data for BST tree :"<<endl;
    takeinput(root);
    cout<<"printing tree in inorder traversal :"<<endl;
    inordertraversal(root);
    // cout<<endl<<"printing tree in preorder traversal :"<<endl;
    // preordertraversal(root);
    int element=15;
    bool ans=presentinbst(root,element);
    cout<<endl<<" the element "<<element<<" is ptresent in bst "<<ans<<endl;


    return 0;
}