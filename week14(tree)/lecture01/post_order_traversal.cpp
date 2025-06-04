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

void postordertraversal(node* root){
    if(root == NULL){
        return;
    }
    // left part of tree k leye call
    postordertraversal(root->left);
    
    //right part of tree k leye call
    postordertraversal(root->right);

    //printing data
    cout<<root->data<<" ";
}
int height(node* root){
    if(root == NULL){
        return 0;
    }
    //es me left k height ayege
    int left=height(root ->left);
    cout<<left<<endl;
    //es me right k height store hoge
    int right=height(root ->right);
    cout<<right<<endl;
    //es m maximum height store hoge
    int ans=max(left,right);

return ans;
}

int main(){
    node* root=NULL;
    root=buildtree();

    postordertraversal(root);
        
    return 0;
}