#include<iostream>
#include<vector>
using namespace std;

int resolve(vector <int> arr,int target,int ans){
    if(target==0){
        return 0;
    }
    if(target<0){
        return INT32_MIN;
    }
    int maxi=INT32_MIN;
    for(int i=0;i<arr.size();i++){
        ans= resolve(arr,target-arr[i],ans);
        if(ans != INT32_MIN)
        maxi=max(maxi,ans+1);

    }
  return maxi;
}

int main(){
    vector <int> arr{5,2,2}  ;
    int target=8;
    int ans=INT32_MIN;
    int aans=resolve(arr,target ,ans);
    cout<<"target using minimum element of vector  "<<aans<<endl;
    return 0;
}