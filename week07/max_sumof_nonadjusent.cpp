#include<iostream>
#include<vector>

using namespace std;
int  solve(vector <int>& arr,int i,int sum,int maxi){
    if(i >=arr.size()){
        maxi=max(sum,maxi);
        return maxi;
    }
    //include

    int inc=solve(arr,i+2,sum+arr[i],maxi);
    //exclude
    int exc=solve(arr,i+1,sum,maxi);
    return max(inc,exc);
}
int main(){
    vector <int> arr{1,2,4,9,8};
    int i=0;
    int sum=0;
    int maxi=INT32_MIN;
    int ans=solve(arr,i,sum,maxi);
    cout<<"answer is "<<ans<<endl;;
    return 0;
}

    


