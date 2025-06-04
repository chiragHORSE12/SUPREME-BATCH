#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> & nums,int curr,int prev){
    if(curr >= nums.size()){
        return 0;
    }

    int include=0;
    int exclude=0;
    if(prev == -1|| nums[curr] > nums[prev]){
        //update prev to curr & curr = curr+1
        include=1+solve(nums,curr+1,curr);
    }
    //not update prev
    exclude=0+solve(nums,curr+1,prev);
    return max(include,exclude);
}
 
int main(){
    vector<int> nums{10,9,2,5,3,7,101,18};
    int curr=0;
    //index of current element
    int prev=-1;
    // index of last included elemeny=t in subsequence
    int ans=solve(nums,curr,prev);
    cout<<"longest increasing subsequence is : "<<ans<<endl;
    return 0;

}
