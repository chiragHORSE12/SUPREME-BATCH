#include<iostream> 
#include<vector>
using namespace std;

bool can_partition(vector<int> &nums,int target,int index){
    
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

    bool include=can_partition(nums,target-nums[index],index+1);
    bool exclude=can_partition(nums,target,index+1);

    return (include || exclude);
} 


bool divide(vector<int> & nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum +=nums[i];
    }
    //yahe galti karoga 
    // important condition h solution k leye 
    if(sum % 2 == 1){
        return false;
    }
    int part_sum = sum/2;
    int index=0;
    bool ans=can_partition(nums,part_sum,index);
    return ans;
}

int main(){
    vector <int> nums{1,5,11,5};
    cout<<"partition equal sum is :"<<divide(nums)<<endl;
    return 0;
}