#include<iostream>
#include<vector>
using namespace std;

int solvememo(int n,int k,vector<int>& dp){
    // base case
    if(n == 1){
        return dp[n]=k;
    }
    if(n == 2 ){
        return dp[n]= (k+k*(k-1));
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n]=(solvememo(n-1,k,dp)+solvememo(n-2,k,dp))*(k-1);
    return dp[n];

}

int main(){
    int n=3;
    int k=2;
    vector<int>dp (n+1,-1);

    int ans=solvememo(n,k,dp);
    cout<<ans<<endl;
}
