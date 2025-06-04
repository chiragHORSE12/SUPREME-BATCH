#include<iostream>
#include<vector>
using namespace std;

int le_long_subseq_m(string& st1,string& st2,int s1,int s2,vector<vector<int>>& dp){
        //base vase
        if(s1 >=st1.length()||s2 >=st2.length()) {
            return 0;
        }
        //overlapping 
        if(dp[s1][s2] != -1){
            return dp[s1][s2];
        }
        
        int ans=0;
        if(st1[s1]==st2[s2]){
            ans= 1+le_long_subseq_m(st1,st2,s1+1,s2+1,dp);
        }
        else{
            ans= 0+max(le_long_subseq_m(st1,st2,s1+1,s2,dp),le_long_subseq_m(st1,st2,s1,s2+1,dp));
        
        }
    return dp[s1][s2]=ans;
}

int main(){
    string s1="abcde";
    string s2="ace";
    int i=0;
    int j=0;
    vector<vector<int>> dp(s1.length(),vector<int> (s2.length(),-1));
    int ans=le_long_subseq_m(s1,s2,i,j,dp);
    cout<<ans<<endl;
}