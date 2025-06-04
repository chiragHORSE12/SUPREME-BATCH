#include<iostream>
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
int main(){
    node* root=NULL;
    root=build_tree();
    
    return 0;
}