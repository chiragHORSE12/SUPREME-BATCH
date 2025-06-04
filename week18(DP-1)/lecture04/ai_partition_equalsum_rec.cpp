#include<iostream>
#include<vector>
using namespace std;

bool can_partition(vector<int> &nums, int target, int index) {
    int n = nums.size();
    if (index >= n) {
        return false;
    }
    if (target == 0) {
        return true;
    }
    if (target < 0) {
        return false;
    }

    bool include = can_partition(nums, target - nums[index], index + 1);
    bool exclude = can_partition(nums, target, index + 1);

    return include || exclude;
}

bool divide(vector<int> &nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    if (sum % 2 == 1) {
        return false;
    }
    int part_sum = sum / 2;
    int index = 0;
    bool ans = can_partition(nums, part_sum, index);
    return ans;
}
int main(){
    vector<int> nums{1,2,5};
    cout<< divide(nums)<<endl;
    
return 0;
}


