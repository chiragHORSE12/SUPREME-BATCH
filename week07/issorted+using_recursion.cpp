#include<iostream>
using namespace std;

bool issort(int arr[],int i,int& n){
    //base case 
    if(i==n-1){
        return true;
    } 

    if(arr[i+1]<arr[i]){
        return false;
    }
    issort(arr,i+1,n);
}
int main(){
    int arr[]={1,2,3,4,5,7,8,9};
    int i=0;
    int n=8;
    bool ans=issort(arr,i,n);
    cout<<"the given is sorted :"<<ans;
    return 0;
}