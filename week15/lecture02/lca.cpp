#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node*right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
node* insertintobst(node* &root,int data){
    if(root == NULL ){
        root =new node(data);
        return root;
    }
    if(root ->data > data){
        root->left=insertintobst(root->left,data);
    }
    else{
        root->right=insertintobst(root->right,data);
    }
    return root;
} 
void takeinput(node* &root){
    cout<<"enter the data for input of tree :"<<endl;
    int data;
    cin>>data;

    while(data != -1){
        root=insertintobst(root,data);
        cin>>data;
    }
return ;
}
node* lca(node*root,int p,int q){
    
    if(root == NULL){
        return NULL;
    }
    if((root->data > p)&&(root->data > q)){
        return lca(root->left,p,q);
    }
    else if((root->data <q)&&(root->data < p)){
        return lca(root->right,p,q);
    }
    else if((root->data >q)&&(root->data < p)){

        return root;
    }
    else{
        return root;
    }
}
int main(){
    node* root=NULL;
    takeinput(root);
    cout<<"the lowest common ansester is :";
    cout<<lca(root,50,175)->data<<endl;
    return 0;
}