#include<iostream>
#include<vector>
using namespace std;

int solveusingmemo(vector <int> &arr,int n,vector<int> & dp){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return arr[0];
    }
    //check if value is already exist
    if(dp[n] != -1){
        return dp[n];
    }

    int include=solveusingmemo(arr,n-2,dp)+arr[n];
    int exclude=solveusingmemo(arr,n-1,dp)+0;

    dp[n]=max(include,exclude); 
    return dp[n];
    }
    int main(){
        vector<int> nums{1,2,3,1};
        int n =nums.size()-1;
        vector<int> dp(n+1,-1);
        int ans=solveusingmemo(nums,n,dp);
        cout<<" the maximum amount can be robbered is : "<<ans<<endl;
        return 0;
    }
    