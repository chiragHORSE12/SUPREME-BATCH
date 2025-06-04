#include<iostream>
#include<vector>
using namespace std;

int find(vector <int> arr,int target){
    //base case 1
    if(target == 0){
        return 0;
    }
    //base case 2
    if(target < 0){
        return INT32_MAX;
    }
    //solve one case 
    int mini=INT32_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=find(arr,target-arr[i]);
        if(ans != INT32_MAX)
        mini=min(mini,ans+1);
    }
return mini;
}

int main(){
    vector <int> arr{1,2,3,4};
    int target=9;
    int n= INT32_MAX;

    int ans =find(arr,target);
    cout<<"by using element of array How many number used to get target sum is ";
    cout<<ans<<endl;
    return 0;
}