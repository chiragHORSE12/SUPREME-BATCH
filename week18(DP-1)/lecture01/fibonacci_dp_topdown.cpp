#include<iostream>
#include<vector> 
using namespace std;

int topdown(vector<int> dp,int n){
    if(n ==1 ||n==0){
        return n;
    }
    //base case
   
    if(dp[n] != -1){
        return dp[n];
    }
    dp[n]=topdown(dp,n-1) +topdown(dp,n-2);
    return dp[n];
}


int main(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    vector <int> dp(n+1,-1);
    int ans=topdown(dp,n);
    cout<<ans<<endl;
    return 0;
}