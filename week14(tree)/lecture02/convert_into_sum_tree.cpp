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

// node* conve(node* root){
//     if(root == NULL){
//         return 0;
//     }
//     node* leftsum=conve(root->left);
//     node* rightsum=conve(root->right);
//     root->data=leftsum->data+rightsum->data+root->data;
//     return root;
// }
int conve(node* root){
    if(root == NULL){
        return 0;
    }
    int leftsum=conve(root->left);
    int  rightsum=conve(root->right);
    root->data=leftsum+rightsum+root->data;
    return root->data;
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

int main(){
    node* root=NULL;
    root=buildtree();
    //inordertraversal(root);
    int h=conve(root);
    //cout<<"the sum of given tree is : "<<h<<endl;
    inordertraversal(root);
}