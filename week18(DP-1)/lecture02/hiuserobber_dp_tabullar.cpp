#include<iostream>
#include<vector>
using namespace std;

int tabular(vector<int>& nums,int n){
    //step 1:create dp vector
     vector<int> dp(n+1,0);
     dp[0]=nums[0];
    //step 2:
    
    for(int i=1;i <= n;i++){
        int temp=0;
        // to handle negative value
        if(i-2 >=0){
            temp=dp[i-2];
        }
        int include = temp+nums[i];
        int exclude = dp[i-1]+0;

        dp[i]=max(include,exclude);
    }
    return dp[n];
}


int main(){
    vector<int> nums{1,2,3,1};
    int n =nums.size()-1;
    int ans=tabular(nums,n);
    cout<<ans<<endl;

}
