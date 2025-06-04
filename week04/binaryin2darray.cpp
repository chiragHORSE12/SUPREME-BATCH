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
    int elemen=ar[row][col];

    while(start<=end){
        int row=mid/m;
        int col=mid%m;
        
        if(ar[row][col]==key){
            return 1;
        }
        else if(ar[row][col]>key){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }
    return 0;
}

int main(){
    int n,m=4;
    // cout<<"enter the value of n:";
    // cin>>n;
    // cout<<"enter the value of m:";
    // cin>>m;

    int ar[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int size=16;
    int key=15;
    int ans=find(ar,size,n,m,key);
    if(ans>0){
        cout<<"the element  found";
        
    }
    else{
        cout<<"element not found!!";
    
    }
    return 0;
}