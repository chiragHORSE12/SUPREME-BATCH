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
bool isbalanced(node* root){
    if(root == NULL){
        return true;
    }
    //left k height nikale ga
    int left=height(root->left);
    //right k height k nikale ge
    int right=height(root->right);
    //difference nikalega 
    //dono ka (balance factor)
    int dif=abs(left-right);
    
    bool ans=(dif<=1);
    //left wala balanced h k nhi 
    bool leftans=isbalanced(root->left);
    //right wala balanced h k nhi
    bool rightans=isbalanced(root->right); 

    if(ans && leftans && rightans){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    node* root=NULL;
    root=buildtree();
    bool ans=isbalanced(root);
    cout<<"the tree is balanced :"<<ans<<endl;
    return 0;
}