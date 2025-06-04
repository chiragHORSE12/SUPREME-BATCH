#include<iostream>
#include<vector>
using namespace std;

int solve(vector <int> arr,int sum,int i,int maxi){
    if(i >= arr.size()){
        maxi=max(maxi,sum);
        return maxi;
    }
    //include
    int inc =solve(arr,sum+arr[i],i+2,maxi);
    //exclude
    int exc =solve(arr,sum,i+1,maxi);

    return max(inc,exc);
}

int main(){
    vector <int> arr{1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    int i=0;
    int maxi=INT32_MIN;
    int ans= solve(arr,sum,i,maxi);
    cout<<"maximum amount can be rob by house robber is :"<<ans<<endl;
    return 0;
}