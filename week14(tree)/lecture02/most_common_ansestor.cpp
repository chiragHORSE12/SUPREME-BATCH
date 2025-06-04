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
node* lca(node* root,node* p,node* q){
    if(root == NULL){
        return NULL;
    }
//check that the node having data is same as we want 
    if(root ->data ==p->data ){
        return p;
    }
    if(root->data ==q->data){
        return q;
    }

    node* left=lca(root->left, p,q);
    node* right=lca(root->right,p,q);
    if((root->left == NULL)&&(root->right == NULL)){
        return NULL;
    }
    else if((root->left != NULL)&&(root->right == NULL)){
        return right;
    }
    else if((root->left == NULL)&&(root->right != NULL)){
        return left;
    }
    else {
        return root;
    }
}
int main(){
    node* root=NULL;
    root=buildtree();
    //100 75 25 50 -1 -1 12 -1 -1 3 -1 -1 right 150 30 -1 -1 45 -1 -1
    
    node* p=new node(50);
    node* q=new node(30);
    node* ans=lca(root,p,q);
    cout<<"lowest common ansestor is :"<<ans->data<<endl;
    
return 0;
}