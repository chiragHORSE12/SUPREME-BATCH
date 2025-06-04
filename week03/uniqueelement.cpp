#include<iostream>
#include<vector>
using namespace std;

int findunique( vector<int> arr){
    int ans= 0;

    for(int i=0;i<arr.size();i++){
        ans= ans ^ arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the size of vector arr:";
    cin>>n;
    vector<int> arr(n);
    cout<<endl;
    cout<<" element of vector arr:";

    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int unique =findunique(arr);
    cout<<" unique elemnt is :"<< " "<< unique;
    return 0;

    
    
    
    }