#include<iostream>
#include<vector>
using namespace std;

bool can_partition_memo(vector<int> &nums,int target,int index,vector<vector<int>>& dp){
    
    //bahar nhi hona chaiye index
    int n=nums.size();
    if(index >= n){
        return false;
    }
    // mel gaya k nhi
    if(target == 0){
        return true;
    }
    // target negative to nhi hua h
    if(target < 0){
        return false;
    }
    if(dp[index][target] != -1){
        return dp[index][target];
    }

    bool include=can_partition_memo(nums,target-nums[index],index+1,dp);
    bool exclude=can_partition_memo(nums,target,index+1,dp);

    return dp[index][target]=(include || exclude);
}
bool divide(vector<int> & nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
    }
    //yahe galti karoge (odd sum condition ko handle karege )
    if(sum & 1){
        return false;
    }
    int target=sum/2;
    int index=0;
    vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
    bool ans=can_partition_memo(nums,target,index,dp);
    return ans;
}
int main(){
    vector<int> nums{1,2,5};
        cout<<"partition equal sum is :"<<divide(nums)<<endl;
        return 0;
}