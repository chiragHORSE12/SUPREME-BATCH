#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node* right;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
node* build_tree(){

    int data;
    cout<<"enter the value of data"<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }

    //step A/B/C
    node* root= new node(data);

    cout<<"enter the data for"<< data<<" left side of tree"<<endl;
    node* left=build_tree();
    
    cout<<"enter the data for"<< data<<" right side of tree:"<<endl;
    node* right=build_tree();
   
    return root;

}

pair<bool,int> solve(node* root){
    if(root == NULL){
        pair<bool,int> p=make_pair(true,INT64_MIN);
        return p;
    }
    if(root->left == NULL && root->right == NULL){
       pair<bool,int> p=make_pair(true,root->data); 
    }

    pair<bool,int> left=solve(root->left);
    pair<bool,int> right=solve(root->right);

    if(left.first ==true && right.first == true&& root->data > left.second &&root->data > right.second)
    {
        pair<bool,int> p=make_pair(true,root->data);
        return p;
    }
    else{
        pair<bool,int> p=make_pair(false,root->data);
        return p;
    }
}

int main(){
    node* root=NULL;
    root=build_tree();
    //cout<<"the given cbst is heap:";
    pair<bool,int>p=solve(root);
    if(p.first ==true){
        cout<<" the given cbt is heap !!"<<endl;
    }
    else{
        cout<<"the given cbt is not heap !!"<<endl;
    }
    
    return 0;
}