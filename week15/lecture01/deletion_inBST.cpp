#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }

};

 node*insertintobst(node* root,int data){
    if(root == NULL){
        root =new node(data);
        return root ;
    }
    if(data > root->data){
        root->right=insertintobst(root->right,data);
        
    }
    else{
        root->left=insertintobst(root->left,data);
    
    }
    return root;

}
void takeinput(node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root=insertintobst(root,data);
        cin>>data;
    }
}
node*  presentinbst(node* &root,int element){
    if(root == NULL){
        return NULL;
    }
    if(root->data == element){
        return root;
    }
    if(root->data > element){
        presentinbst(root->left,element);
    }
    else{
        presentinbst(root->right,element);
    }
}
int max(node* &root){
    if(root == NULL){
        return -1;
    }
    node* temp=root;
    while(temp->right!= NULL){
        temp=temp->right;
    }
    return temp->data;
}
node* deleten(node* &root,int target){
    // base case
    if(root == NULL){
        return root;
    }
    cout<<"recive the node for delete node :"<<target<<endl;

    // step :1 find the value which you want to delelte
    node* temp=presentinbst(root,target);
// A left and right both NULL
    if((temp->left == NULL)&&(temp->right ==NULL)){
        delete temp;
        return NULL;
    }
// B left not NULL right NULL
    else if((temp->left != NULL)&&(temp->right ==NULL)){
        node* child = temp->left;
        delete temp;
        return child;
    }
// C left is NULL and right NOT  NULL
    else if((temp->left == NULL)&&(temp->right !=NULL)){
        node* child=temp->right;
        delete temp;
        return child;
    }
// D left is NOT NULL right NOT NULL
    else{
        // dono child exisit kar t h to 
        //inorder predesser yane temp -> left ka max element
        int inorderpred=max(temp->left);
        temp->data=inorderpred;
        temp->left=deleten(temp -> left,inorderpred);
        return temp;
    }

}
void inordertraversal(node* root){
    if(root == NULL){
        return;
    }
    // left part of tree k leye call
    inordertraversal(root->left);
    //printing data
    cout<<root->data<<" ";
    //right part of tree k leye call
    inordertraversal(root->right);
}

int main(){
    node* root=NULL;
    cout<<"Enter the data for BST tree :"<<endl;
    takeinput(root);
    cout<<"printing tree in inorder traversal :"<<endl;
    //inordertraversal(root);
    root=deleten(root,150);
    //cout<<"printing tree in inorder traversal :"<<endl;
    inordertraversal(root);

    return 0;
}