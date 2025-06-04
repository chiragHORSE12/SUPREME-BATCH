#include<iostream>
#include<vector>
using namespace std;

long long int MOD = 1000000007;
int get_dieceroll_OS(int n,int& k,int target){

    //create 2 1D vector
    vector<int> prev(target+1,0);
    vector<int> curr(target+1,0);

    prev[0]=1;

    for(int index=1;index<=n;index++){
        for(int t=1;t<=target;t++){
            long long int sum=0;
            for(int i=1;i<=k;i++){
                long long int rec=0;
                if(t-i >= 0){
                    //phrle prvious m target lekar operation kareye
                    rec=prev[t-i];
                }
                sum=(sum % MOD +rec % MOD) % MOD;
            }
            //curr ke target m operation k bad k value le lee
            //curr ke target par sum daldo
            curr[t]=sum;
        }
        //shift
        //curr k value previous m dal de take updated value curr m rakhne k leye 
        prev=curr;
    }
    return prev[target];
}

int main(){ 
    int n=2;
    int faces=6;
    int target=7;
    //vector<vector<int>> dp(n,vector< int> (target+1,-1));
    int ans=get_dieceroll_OS(n,faces,target);
    cout<<ans<<endl;
}
