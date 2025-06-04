#include<iostream>
// #include<limit>
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

node* buildtree(){
    int data;
    cout<<"enter the data for the node: "<<endl;
    cin>>data;
    if(data == -1 ){
        return NULL;
    }
    node* root=new node(data);

    cout<<"enter the data for the left of "<<data<<endl;
    node* left=buildtree();
    cout<<"enter the data for the right of "<<data<<endl;
    node* right=buildtree();

    return root;
}
bool checkbst(node* &root,int lower,int upper){
    if(root == NULL){
        return true;
    }
    if((root->data > upper) || (root->data < lower)){
        return false;
    }
    if(checkbst(root->left,-1000,root->data)&&checkbst(root->right,root->data,1000)){
        return true;
    }
}

int main(){
    node* root=NULL;
    root=buildtree();
    int upper=1000;
    int lower=-1000;
    cout<<"The given tree  is BST: "<<checkbst(root,lower,upper)<<endl;
return 0;
}