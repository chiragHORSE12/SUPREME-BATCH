#include<iostream>
#include<vector>
using namespace std;

int solve(vector <int> arr,int target,int out){
    if(out == target){
        return ;
    }
    if(out >target){
        return INT16_MAX;
    }
    int mini=INT16_MAX;

    for(int i=0;i<arr.size();i++){
        int ans=solve(arr,target,out+arr[i]);
        if(ans != INT16_MAX)
        int mini=min(mini, ans +1);

    }
    return mini;

}

int main(){
    vector <int> arr{1,2};
    int target=9;
    int out=0;
    int ans=solve(arr,target,out);
    cout<<"answer is "<<ans<<endl;
    return 0;
}