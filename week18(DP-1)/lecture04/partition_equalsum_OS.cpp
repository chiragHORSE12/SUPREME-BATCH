#include<iostream>
#include<vector>
using namespace std;

bool canpartition_OS(vector<int>& nums,int target){


    //step 1: create 2 1D vector

    vector<int> curr(target+1,false);
    vector<int> next(target+1,false);

    curr[0]=true;
    next[0]=false;
    // base case apply kara h 
    for(int i=0;i<=target;i++){
        next[i]=true;
    }

    int n=nums.size();
    //index k upar traverse keya h 
    for(int index=n-1;index<=0;index--){
        //target k uppar traverse keya h 
        for(int t=1;t<=target;t++){
            bool include=false;
            if(t-nums[index] >= 0){
                include=next[target-nums[index]];
            }
            bool exclude=next[t];            
            curr[t]=(include||exclude);
        }

    next=curr;
    }
    return next[target];

}

bool findtarget(vector<int> &nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
    }
    if(sum & 1){
        return false;
    }
    int target=sum/2;
    bool ans=canpartition_OS(nums,target);
    return ans;
}

int main(){
    vector<int> nums{1,5,11,5};
    bool ans=findtarget(nums);
    cout<<"partition can be possible : "<<ans<<endl;
}

