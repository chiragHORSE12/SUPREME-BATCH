#include<iostream>
#include<vector>
using namespace std;

int solve(vector <int> &arr,int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return arr[0];
    }

    int include=solve(arr,n-2)+arr[n];
    int exclude=solve(arr,n-1)+0;

    return max(include,exclude);
}
int main(){
    vector <int> arr{1,2,3,1};
    int n= arr.size()-1;
    int ans=solve(arr,n);
    cout<<"the maximum amount can be robber is : "<<ans<<endl;
    return 0;

}