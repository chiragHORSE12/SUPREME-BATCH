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

node* createbst(int arr[],int s,int e){
    if( s > e){
        return NULL;
    }
    int mid=(s+e)/2;
    int element =arr[mid];
    node* root=new node(element);

    root->left=createbst(arr,s,mid-1);

    root->right=createbst(arr,mid+1,e);

    return root;
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
    int arr[8]={10,20,30,40,50,60,70,80};
    node* root=NULL;
    int start=0;
    int end=7;
    root=createbst(arr,start,end);
    inordertraversal(root);
return 0;
}