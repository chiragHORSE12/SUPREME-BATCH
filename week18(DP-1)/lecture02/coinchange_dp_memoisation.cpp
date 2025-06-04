#include<iostream>
#include<vector>
using namespace std;

int solvememo (vector<int> &arr,int amount,vector<int>& dp){
    
    int mini=INT32_MAX;
    //base 
    if(amount == 0){
        return 0;
    }
    if(amount < 0){
        return INT32_MAX;
    }
    if(dp[amount] != INT32_MAX){
        return dp[amount];
    }

    for(int i=0;i<arr.size();i++){
        int  ans=solvememo(arr,amount-arr[i],dp);
        if(ans != INT32_MAX){
            mini=min(mini,ans+1);
        }
    }
    dp[amount]=mini;
    return dp[amount];
}

int main(){
    vector <int> arr{1,2,5};
    int amount=11;
    vector<int> dp(amount+1,INT32_MAX);
    int ans=solvememo(arr,amount,dp);
    cout<<"total no of minimum coin require for amount  "<<amount<<" is "<<ans<<endl;
    return 0;
}