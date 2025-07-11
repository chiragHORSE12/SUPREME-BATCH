#include<iostream>
#include<vector>
using namespace std;
int tabular(int n,int k){
    vector<int> dp(n+1,0);

    dp[1]= k;
    dp[2]=k+(k*(k-1));

    for(int i=3;i<=n;i++){
        dp[i]=(dp[i-1]+dp[i-2])*(k-1);
    }
    return dp[n];
}

int main(){
    int n=4;
    int k=3;
    int ans=tabular(n,k);
    cout<<ans<<endl;

}
