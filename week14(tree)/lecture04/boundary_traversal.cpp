#include<iostream>
#include<queue>
#include<map>
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
//left view 
void printl(node*root,int gleval,vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(gleval == ans.size()){
        ans.push_back(root->data);
    }
    printl(root->left,gleval+1,ans);
    printl(root->right,gleval+1,ans);
return;
}

//right view 
void printr(node*root,int leval,vector<int> &ans){
    if(root == NULL){
        return;
    }
    if(leval == ans.size()){
        ans.push_back(root->data);
    }
    printr(root->right,leval+1,ans);
    printr(root->left,leval+1,ans);
    
return;
}
//leaf node 
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
        topnode[hd]=frontnode->data;
        

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
    int leval=0;
    int gleval=0;
    vector<int> ans;
    vector<int> ns;
    printl(root,leval,ans);
    printr(root,gleval,ns);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    print(root);
    for(int i=0;i<ns.size();i++){
        cout<<ns[i]<<" ";
    }
    return 0;

}