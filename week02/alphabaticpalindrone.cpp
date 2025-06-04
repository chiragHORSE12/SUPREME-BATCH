#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            int ans=col+1;
            char ch=ans+'A'-1;
            cout<<ch;
        }
        for(int col=row;col>0;col--){
            int ans=col;
            char ch=ans+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}