#include <iostream>
#include<queue>
using namespace std;

class Node{
	public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node* buildTree() {
	int data; 
	cout << "Enter the data: " << endl;
	cin >> data;

	if(data == -1) {
		return NULL;
	}

	//Step A , B and C
	Node* root = new Node(data);

	cout << "Enter data for left part of " << data << " node " << endl;
	root->left = buildTree();
	
	cout << "Enter data for right part of " << data << " node " << endl;
	root-> right = buildTree();

	return root;
	
}

void print(Node*root,int leval,vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(leval == ans.size()){
        ans.push_back(root->data);
    }
    print(root->left,leval+1,ans);
    print(root->right,leval+1,ans);
return;
}
int main(){
    Node* root = NULL;
	root = buildTree();
    vector<int> ans;
    int leval=0;
	print(root,leval,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}