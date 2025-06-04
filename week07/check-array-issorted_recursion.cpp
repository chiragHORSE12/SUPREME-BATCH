#include<iostream>
#include<vector>
using namespace std;

bool checksorted(vector <int> &arr ,int n,int i ){
    //base case 
    if(i==n-1){
        return true;
    }

    if(arr[n+1] < arr[n]){
        return false;
    }

    return checksorted(arr,n,i+1);

}
int main(){
    vector <int> arr{10,20,9,30,50};
    int n=arr.size();
    int i=0;
    bool issorted= checksorted(arr,n,i);

    if(issorted){
        cout<<"array is sorted "<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;

}