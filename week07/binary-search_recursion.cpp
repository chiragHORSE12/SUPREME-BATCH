#include<iostream>
#include<vector>
using namespace std;
int binary(vector <int> arr,int key,int s,int e){

    if(s>e){
        return -1;
    }
    int mid= s+(e-s)/2;
    //cout<<"pass hogaya";

    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid] < key){
        int ans= binary(arr,key,mid+1,e);
        return ans;
    }
    else
    {
        //mid=mid-1;
        int ans= binary(arr,key,s,mid-1);
        return ans;
    }
}


int main(){
    vector <int> arr{10,20,40,50,70,80};
    int key=50;
    int s=0;
    int n=arr.size();
    int e=n-1;
    int ans=binary(arr,key,s,e);
    cout<<"answer is  :"<<ans<<endl;
    return 0;
}