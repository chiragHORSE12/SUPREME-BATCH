#include<iostream>
#include<vector>
using namespace std;

int solve_tabular(vector<int>& nums ){
    int n=nums.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));

    for(int curr=n-1;curr>=0;curr--){
        for(int prev=n-2;prev>=-1;prev--){
            int include=0;
            int exclude=0;
            //ya ha +1 nhi laga na h uske leye hum ne alag condition de hue h
             if(prev == -1|| nums[curr] > nums[prev]){
            //update prev to curr & curr = curr+1
                include= 1 +dp[curr+1][curr+1];//-1 invalid hota h to hum ne prev ko bhi +1 keya h
            }
            //not update prev
            exclude=0+dp[curr+1][prev+1];
            dp[curr][prev +1]=max(include,exclude);
        }
    }
    return dp[0][0];
}
int main(){
    vector<int> nums{10,9,2,5,3,7,101,18};
    int ans=solve_tabular(nums);
    cout<<ans<<endl;
}