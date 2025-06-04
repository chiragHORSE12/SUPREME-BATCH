#include<iostream> 
#include<vector>
using namespace std;
long long int MOD=1000000007;

int get_diecesum_tabular(int n,int &k,int target){
   //step :create dp vetor
    vector<vector<long long int>> dp(n+1,vector< long long int> (target+1,0));

    dp[0][0]=1;
    
    for(int index=1;index<=n;index++){
        for(int t=1;t<=target;t++){

            long long int sum=0; 
            for(int i=1;i<=k;i++){
                long long int rec=0;
                    if(t -i >=0){
                         rec=dp[index-1][t-i];
                        sum=(sum % MOD +rec %MOD )% MOD; 
                   }
            }
            dp[index][t]=sum;
        }
   }
   return dp[n][target];
}


int main(){
    int n=2;
    int target=7;
    int faces =6;
    int ans=get_diecesum_tabular(n,faces,target);
    cout<<"total possible diece roll with sum "<<target<<" is :" <<ans<<endl;
    return 0;
}