#include<iostream> 
#include<vector>
using namespace std;

long long int MOD=1000000007;
    int find(int n ,int &k , int target,vector<vector<int>>& dp){
    if(n<0)
        return 0;
    if(n==0 && target==0) 
        return 1;
    if(n==0 && target !=0) 
        return 0;
    if(n!=0 && target==0) 
        return 0;

    if(dp[n][target] != -1)
        return dp[n][target];

    long long int ans=0;
    //traverse over faces of diece 
        for(int i=1;i<=k;i++){
            // question me return (10^9)+7 m return karna h 
            long long int rec=0;
            if(target-i >=0){
                //k ko traverse karne k leye h use karna h 
             rec=find(n-1,k,target-i,dp);
            }
        //jo mela use vapas MOD se reminder nikala     
        ans=(ans%MOD +rec%MOD)%MOD;
        }
    dp[n][target]=ans;
    return dp[n][target];
}
int main(){ 
    int n=2;
    int faces=6;
    int target=7; 
    vector<vector<int>> dp(n,vector< int> (target+1,-1));
    int ans=find(n,faces,target,dp);
    cout<<ans<<endl;
}
