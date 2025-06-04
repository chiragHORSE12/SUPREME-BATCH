#include<iostream>
using namespace std;

int main(){
    // char name[20];
    // cout<<" enter your name:"<<endl;

    // cin>>name;
    // cout<<" your name is:"<<name<<" "<<"hai"<<endl;
    // char ch[9];
    // ch[0]='c';
    // ch[1]='h';
    // ch[3]='r';
    // ch[4]='a';
    // ch[5]='g';
    // cout<<"enter the element:";
    // cin>>ch[2];
    // cout<<endl;
    // cout<<ch;
    char na[10];
    // cout<<"element to be enterd";
    for(int i=0;i<9;i++){
        cout<<"element to be enterd";
         cin>>na[i];
    }
    cout<<na;
    for(int i=0;i<9;i++){
        cout<<"index is"<<i<<" "<<"element is"<<na[i]<<endl;

    }

    
    return 0;
}
