#include<iostream>
using namespace std;
int find(int ar[2][4],int size,int key,int n,int m){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    // int sizeofrow=n;
    // int columnofrow=m;
    int row=mid/m;
    int col=mid%n;

    while(start<=end){
        int element=ar[row][col];
        if(element==key){
            return col;
        }
        else if(element>key){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}

int main(){
    int n=2;
    int m=4;
    // cout<<"enter the value of n:";
    // cin>>n;
    // cout<<"enter the value of m:";
    // cin>>m;

    int ar[2][4]={{1,2,3,4},{5,6,7,8}};
    int size=8;
    int key=5;
    int ans=find(ar,size,n,m,key);
    if(ans==-1){
        cout<<"element not found!!";
    }
    else{
    cout<<"the index of key value "<<key<<" is "<<ans;
    }
    return 0;
}