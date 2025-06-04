#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> coins,int amount){
//step  1: dp array create kardo 
    vector<int> dp(amount+1,INT32_MAX);
//step 2: base case dekhlo
    dp[0]=0;
    int mini=INT32_MAX;

    for(int target=1;target <=amount;target++){
        int mini=INT32_MAX;
        for(int i=0;i<coins.size();i++){
            if(target -coins[i] >=0){
                int ans=dp[target-coins[i]];
                    if(ans != INT32_MAX){
                          mini=min(mini,ans+1);
                    }
                    dp[target]=mini;
            }
                
        }
    }
    return dp[amount];

}

int main(){
    vector<int> arr{1,2,5};
    int amount=11;
    int ans=solve(arr,amount);
    cout<<ans<<endl;
}