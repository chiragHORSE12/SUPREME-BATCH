#include<iostream>
#include<vector>
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

node* insertintobst(node* root,int data){
    if(root == NULL){
        root=new node(data);
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
    int data;
    cout<<"enter the value of node :"<<endl;
    cin>>data;

    while(data != -1){
        root=insertintobst(root,data);
        cin>>data;
    } 
}
// inorder traverse kar kar value insert kar de ek vector m
 void insertintoinorder(node* &root,vector<int> &inorder){
    if(root ==NULL){
        return ;
    }
    // cout<<"insert in order"<<endl;
    insertintoinorder(root->left,inorder);
    inorder.push_back(root->data);
    insertintoinorder(root->right,inorder);
 }
 bool checksum(vector<int> inorder){
    int k=320;
    // cout<<sum<<endl;
     int s = 0;
        int e = inorder.size() - 1;

        while(s < e) {
            int sum = inorder[s] + inorder[e];

            if(sum == k )
                return true;
            
            if(sum > k) 
                e--;
            else
                s++;
        }

    return false;
}

int main(){
    node* root=NULL;
    takeinput(root);
    vector<int> inorder;
    insertintoinorder(root,inorder);
    cout<<"the node having sum 320 is present in BST "<<checksum(inorder)<<endl;
    return 0;
}