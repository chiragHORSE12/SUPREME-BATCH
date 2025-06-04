#include<iostream>
#include<queue>
#include<map>
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
    cout<<"enter the value of node :"<<endl;
    cin>>data;

    if(data == -1){
        return NULL;
    }
    node*root=new node (data);
    cout<<"enter the element for left of "<<data<<" node"<<endl;
    root->left=buildtree();
    cout<<"enter the element for right of "<<data<<" node"<<endl;
    root->right=buildtree();

    return root;
}
void print(node* root){
    if(root == NULL){
        return;
    }
    map<int,int> topnode;
    queue< pair<node*,int>> q;
    q.push(make_pair(root,0));

    if(!q.empty()){
        pair<node*,int> temp =q.front();
        q.pop();

        node* frontnode=temp.first;
        int hd=temp.second;
        // check karo k jo horizontal distance aya h vo present h to skip varna add kardo 

        if(topnode.find(hd)==topnode.end()){
            topnode[hd]=frontnode->data;
        }

        if(frontnode->left){
            q.push(make_pair(root->left,hd-1));
        }
        if(frontnode->right){
            q.push(make_pair(root->right,hd+1));
        }

    }
    cout<<"printing the map : "<<endl;
    for(auto i:topnode){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    return;
}
int main(){

    node* root=NULL;
    root=buildtree();
    print(root);



}