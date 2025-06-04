#include<iostream>
#include<vector>
using namespace std;

bool can_partition_tabular(vector<int> &nums,int target){
    
    //find size of vector
    int n=nums.size();

    // step : declare 2d dp
    vector<vector<int>> dp(n+1,vector<int>(target+1,false)); 

    //target equal to zero wala bse case
    for(int i=0;i<nums.size();i++){
        //tarrget = 0  ka khel ha -> to i index k value par partition possible h 

        dp[i][0] =true; 
    }
//we declare nums.size()+1 because we start index from n-1 and we update inex as index +1

    for(int index=n-1;index >= 0;index--){
        for(int tar=1;tar<=target;tar++){
            bool include=false;
        
            if(tar-nums[index] >= 0)
                include=dp[index+1][tar-nums[index]];
             
            bool exclude=dp[index+1][tar];
            
            dp[index][tar]=(include||exclude);
        }
    }
    return dp[0][target];    
}
bool divide(vector<int> & nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
    }
    //yahe galti karoge 
    if(sum % 2 ==1){
        return false;
    }
    int target=sum/2;
    int index=0;
    //cout<<"hello"<<endl;

    bool ans=can_partition_tabular(nums,target);
    return ans;
}
int main(){
    vector<int> nums{1,2,5};
        cout<<"partition equal sum is :"<<divide(nums)<<endl;
        return 0;
}