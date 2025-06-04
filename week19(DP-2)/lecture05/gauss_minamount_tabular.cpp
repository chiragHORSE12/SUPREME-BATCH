#include<iostream>
#include<vector>
using namespace std;

int find_minamount_tabular(int n){
    //step 1:
    vector<vector<int>> dp(n+2,vector<int> (n+2,0));

    for(int st=n;st>=0;st--){
        for(int en=0;en<=n;en++){
            if(st >= en){
                continue;
            }
            else{
                int ans=INT32_MAX;
                for(int i=st;i<=en;i++){
                    //amount finding
                    ans=min(ans,i+max(dp[st][i-1],dp[i+1][en]));
                }
                dp[st][en]=ans;
                 
            }
        }

    }
    return dp[1][n];
}

int main(){
    int s=1;
    int n=10;
    int ans= find_minamount_tabular(n);
    cout<<"minimum amount require to win game is : "<<ans<<endl;
    return 0;
}