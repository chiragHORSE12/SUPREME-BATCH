#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
//index find ka function
int findindex(int arr[],int element,int n){
    for(int i=0;i<n;i++){
        if(arr[i] == element){
            return i;
        }
    return -1;
    }
}
Node* buildtree(int inorder[],int preorder[],int size,int &preindex,int inorderstart,int inorderend){
    //base case
    if(preindex > size|| inorderstart > inorderend){
        return NULL;
    }
    
    //step A:element find karo
    int element=preorder[preindex++];
    Node* root=new Node(element);
    int pos=findindex(inorder,element,size);
    //step B: root k left m call laga do
    root->left=buildtree(inorder,preorder,size,preindex,inorderstart,pos-1);

    //step C: root k right m call laga do
    root->right=buildtree(inorder,preorder,size,preindex,pos+1,inorderend);
    return root;
}
void levelOrderTraversal(Node* root) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
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
int main(){
    int inorder []={40,20,50,10,60,30,70};
    int preorder []={10,20,40,50,30,60,70};;
    int size=7;
    int preindex=0;
    int inorderstart=0;
    int inorderend=size -1;
    
    Node* root=buildtree(inorder,preorder,size,preindex,inorderstart,inorderend);
    levelOrderTraversal(root);
    
    return 0;

}