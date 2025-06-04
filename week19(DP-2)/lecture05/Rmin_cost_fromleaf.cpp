#include<iostream>
#include<vector>
#include<map>
using namespace std;
int solve(vector<int>& nums,map<pair<int,int>,int>& maxi,int left,int right){
    if(left==right){
        return 0;
    }

    int ans=INT32_MAX;

    for(int i=left;i<right;i++){
        ans=min(ans,
        maxi[{left,i}]*maxi[{i+1,right}]
        +solve(nums,maxi,left,i) 
        + solve(nums,maxi,i+1,right));
    }
    return ans;
}

int main(){
    vector<int> nums{6,2,4}; 
    map< pair <int,int> , int> maxi;
    //pre-compotation 
    for(int i=0;i<=nums.size()-1;i++){
        maxi[{i,i}]=nums[i];
        for(int j=i+1;j<=nums.size()-1;j++){
            maxi[{i,j}]=max(nums[j],maxi[{i,j-1}]);
        }
    } 
    int n=nums.size();
    int ans=solve(nums,maxi,0,n-1);
    cout<<"minimum cost is : "<<ans<<endl;
    return 0;
}
