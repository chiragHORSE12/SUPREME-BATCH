#include<iostream>
#include<vector>
using namespace std;

int downtop(int n){
    // step 1: create vector of  array
    vector<int> dp(n+1,-1);
    //step 2:observe base case 
    dp[1]=1;
    if(n == 1){
        return dp[n];
    }
    dp[0]=0;
    if(n == 0){
        return dp[0];
    }
    //step 3:
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cout<<"entr the value of n :"<<endl;
    cin>>n;
    int ans=downtop(n);
    cout<<ans<<endl;
    return 0;

}