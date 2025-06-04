#include<iostream>
#include<vector>
using namespace std;
 
int solve(vector<int> & nums,int curr,int prev,vector<vector<int>>& dp){
    if(curr >= nums.size()){
        return 0;
    }
    if(dp[curr][prev+1] != -1){
        return dp[curr][prev];
    }

    int include=0;
    int exclude=0;
    if(prev == -1|| nums[curr] > nums[prev]){
        //update prev to curr & curr = curr+1
        include=1+solve(nums,curr+1,curr,dp);
    }
    //not update prev
    exclude=0+solve(nums,curr+1,prev,dp);
    dp[curr][prev+1]= max(include,exclude);
    return dp[curr][prev+1];
}

int main(){
    vector<int> nums{10,9,2,5,3,7,101,18};
    int curr=0;
    //index of current element
    int prev=-1;
    // index of last included elemeny=t in subsequence
    int n=nums.size();
    vector<vector<int>> dp(n,vector<int> (n+1,-1));

    int ans=solve(nums,curr,prev,dp);
    cout<<"longest increasing subsequence is : "<<ans<<endl;
    return 0;

}