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

int height(node* root){
    if(root == NULL){
        return 0;
    }
    //es me left k height ayege
    int left = height(root ->left);
    
    //es me right k height store hoge
    int right = height(root ->right);

    //es m maximum height store hoge
    int ans=max(left,right)+1;

return ans;
}

int main(){
    node* root=NULL;
    root=buildtree();

    int h=height(root);
    cout<<"max depth of the tree is : "<<h<<endl;
    return 0;
}