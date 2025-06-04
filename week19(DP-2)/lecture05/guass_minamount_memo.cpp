#include<iostream>
#include<vector>
using namespace std;

int find_minamount_memo(int s,int e,vector<vector<int>>& dp){
    if(s >= e){
        return 0;
    }

    if(dp[s][e] != -1){
        return dp[s][e];
    }
    int ans=INT32_MAX;
    for(int i=s;i<=e;i++){
        ans=min(ans,i+max(find_minamount_memo(s,i-1,dp),find_minamount_memo(i+1,e,dp)));

    }
    return dp[s][e]=ans;
}

int main(){
    int s=0;
    int n=10;
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    int ans=find_minamount_memo(s,n,dp);
    cout<<"minimum amount require to win game is : "<<ans<<endl;
    return 0;
}