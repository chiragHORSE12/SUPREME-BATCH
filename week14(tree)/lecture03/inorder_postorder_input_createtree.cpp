#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*left=NULL;
    node* right=NULL;

    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;

    }
};
int find(int arr[],int element,int size){
    for(int i=0;i< size;i++){
        if(arr[i] == element){
            return i;
        }
        return -1;
    }
}
node* buildtree(int inorder[],int postorder[],int size,int &postindex,int inorderstart,int inorderend){
    if(postindex <0 || inorderstart >inorderend){
        return NULL;
    }
    //step A: find the root 
    int element=postorder[postindex--];
    node* root=new node(element);
    int pos=find(inorder,element,size);

    //step B: root->right
    root->right=buildtree(inorder,postorder,size,postindex,pos+1,inorderend);

    //step C:root ->left

    root->left=buildtree(inorder,postorder,size,postindex,inorderstart,pos-1);
return root;
}
void levelOrderTraversal(node* root) {
	queue<node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}	
	}
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
int main(){
    int inorder []={40,20,10,50,30,60};
    int postorder []={40,20,50,60,30,10};
    int size=6;
    int postindex=size-1;
    int inorderstart=0;
    int inorderend=size -1;
    node*root=NULL;
    root=buildtree(inorder,postorder,size,postindex,inorderstart,inorderend);
    levelOrderTraversal(root);
    postordertraversal(root);
    return 0;
}