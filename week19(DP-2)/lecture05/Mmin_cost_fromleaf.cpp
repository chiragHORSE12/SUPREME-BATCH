#include<iostream>
#include<vector>
#include<map>
using namespace std;
int solve_memo(vector<int>& nums,map<pair<int,int>,int>& maxi,int left,int right,vector<vector<int>>& dp){
    if(left==right){
        return 0;
    }
    //reduce over lapping 
    if(dp[left][right] !=-1){
        return dp[left][right];
    }

    int ans=INT32_MAX;

    for(int i=left;i<right;i++){
        ans=min(ans,
        maxi[{left,i}]*maxi[{i+1,right}]
        +solve_memo(nums,maxi,left,i,dp) 
        + solve_memo(nums,maxi,i+1,right,dp));
    }
    //return kara deya ans ko 
    return dp[left][right] =ans;
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
    vector<vector<int>> dp (n+1,vector<int> (n+1,-1));
    int ans=solve_memo(nums,maxi,0,n-1,dp);
    cout<<"minimum cost is : "<<ans<<endl;
    return 0;
}
