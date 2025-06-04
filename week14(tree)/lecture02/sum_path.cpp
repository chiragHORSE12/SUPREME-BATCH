#include<iostream>
#include<vector>
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

void solve(node* root,int target_sum,int sum,vector<int> path,vector<vector<int>> ans) {
    if(root == NULL){
        return;
    }
    //leaf node k condition
    if(root-> left == NULL && root->right == NULL){
       //value insert karde h
        path.push_back(root->data);
        sum+=root->data;
        //compare kar rahe h
        if(sum== target_sum){
            ans.push_back(path);
        }
        return;
    }
    //include current node 
    path.push_back(root->data);
    sum+=root->data;

    solve(root->left,target_sum,sum,path,ans);
    solve(root->right,target_sum,sum,path,ans);

 }
 int main(){
    node* root=NULL;
    root=buildtree();
    int target=22;
    int sum=0;
    vector<int> temp;
    vector<vector<int>> ans;
    solve(root,target,sum,temp,ans);
    //print bake h
return 0;
 }

 // steps 
 //dalo 
 //update karo 
 //check karoo 

 //dalo update karo call laga do