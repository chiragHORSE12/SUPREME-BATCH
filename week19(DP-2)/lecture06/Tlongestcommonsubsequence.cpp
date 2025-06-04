#include<iostream>
#include<vector>
using namespace std;

int len_long_subseq(string s1,string s2){

    //step : 1 create 2D dp vector
    vector<vector<int>> dp(s1.length()+1,vector<int> (s2.length()+1,0));

    for(int i=s1.length()-1;i>=0;i--){
        for(int j=s2.length()-1;j>=0;j--){
        int count=0;
            if(s1[i] == s2[j]){
               count=1+dp[i+1][j+1];
            }
            else{
                count=0+max(dp[i+1][j],dp[i][j+1]);
            }
            dp[i][j]=count;
        }
    }
    //jaha loop khatam hota h vo h ye 0 0
    //jo humne memo wale m value provide kare h 
    return dp[0][0];
}

int main(){
    string s1="abcde";
    string s2="ace";
    int ans=len_long_subseq(s1,s2);
    cout<<ans<<endl;
}