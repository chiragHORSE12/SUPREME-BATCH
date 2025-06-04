#include<iostream>
#include<vector>
#include<map>
using namespace std; 

  int solve_tabular(vector<int>& nums,map<pair<int,int>,int>& maxi){
    int n=nums.size();
    //create 2d vector
    vector<vector<int>> dp(n+1,vector<int> (n+1,0));
   
   for(int left=n-1;left>=0;left--){
    for(int right=0;right<=n-1;right++){
        if(left >= right){
            continue;
        }
        else{
              int ans=INT32_MAX;

              for(int i=left;i<right;i++){
                   ans=min(ans,
                   maxi[{left,i}]*maxi[{i+1,right}]
                   +dp[left][i] 
                   + dp[i+1][right]);
                }
                dp[left][right] =ans;
            }
        }
   }
      // return dp[left][right];
   return dp[0][n-1];
  }

int main(){
    
    vector<int> arr{6,2,4};
    map< pair <int,int> , int> maxi;
        //pre-compotation 
    for(int i=0;i<=arr.size()-1;i++){
        maxi[{i,i}]=arr[i];
        for(int j=i+1;j<arr.size();j++){
            maxi[{i,j}]=max(arr[j],maxi[{i,j-1}]);
        }
    } 
    int ans= solve_tabular(arr,maxi); 
    cout<<ans<<endl;
    return 0;
} 
