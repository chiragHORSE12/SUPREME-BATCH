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
bool ansestor(node* root,node* m,int &k){
    //base case
    if(root == NULL){
        return true;
    }
    //check karega mela k nhi mela
    if(root->data == m->data){
        return true;
    }
    //left wale  ka answer dega
    bool left=ansestor(root->left,m,k);
    //right wale ka answer dega
    bool right=ansestor(root->right,m,k);
// melaya to kth time tak peche leke jana h 
// vo hum loop se leke jayege
    if(left ==true || right == true){
        k--;
    }
    if(k==0){
        cout<<"the kth ansestor node  is "<<root->data<<endl;
        return true;
    }  
     
}    

int main(){
    node* root=NULL;
    root=buildtree();
    node*n=new node(8);
    int k=1;
    bool ans=ansestor(root,n,k);
    //cout<<"the kth ansestor of node "<<n<<" is "<<ans->data<<endl;
    return 0;
}

//    1
//   3    7
// 6   5
//  -1  8