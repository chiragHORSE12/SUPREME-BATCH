#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solveusingrecursion(vector<int>& coins,int amount){

    //base case 
    if(amount == 0){
        return 0;
    }
    if(amount < 0){
        return INT32_MAX;
    }

    int mini=INT32_MAX;

    for(int i=0;i<coins.size();i++){
        //cout<<coins.size();
        int ans=solveusingrecursion(coins,amount - coins[i]);
        if(ans != INT32_MAX){
            mini=min(mini,ans+1);
        }
    }
    return mini;
}

int main(){
    vector<int> coins {1,2,5};
    int amount=11;
    int ans=solveusingrecursion(coins,amount);
    cout<<"we require minimum "<<ans<<" coins for amount "<<amount<<endl;
    return 0;
}