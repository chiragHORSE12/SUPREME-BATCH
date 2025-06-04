#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    for(int row=0;row<n;row++){
        //spaces of inverted pyramid
        for(int col=0;col<n-row;col++){
            cout<<" ";
        }
        if(row==0||row==n-1){
        for(int col=0;col<2*row+1;col++){
            
            {
                cout<<" * ";
            }
            else{
                cout<<" ";
            }
        cout<<endl;
    }
}
return 0;
}