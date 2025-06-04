#include<iostream>
#include<queue>
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
void levalordertraversal(node* &root){
    queue <node*> q;
    //initially 
    q.push(root);
    q.push(NULL);
    
    while(! q.empty()){
        //a: store front element of queue
        node*temp =q.front();

        //b: pop that element  
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            //c: print the stored data
                cout<<temp->data<<" ";
            }
        
        //d: store the child data
        if(temp -> left) {
			q.push(temp ->left);
			}
		if(temp ->right) {
	    q.push(temp ->right);
		}
    }
}

int main(){
    node* root=NULL;
    root=build_tree();
    cout<<"leval order traversal :"<<endl;
    levalordertraversal(root);
    
    return 0;
}