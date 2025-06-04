#include<iostream>
#include<vector>
using namespace std;
int solve_SO(int n,int k){
    int prev1=k;
    int prev2=(k+(k*(k-1)));

    for(int i=3;i<=n;i++){
        int curr=(prev1+prev2)*(k-1);
        //swap value of prev 1 and prev2
        prev1=prev2;
        prev2=curr;
    }
    return prev2;
}

int main(){
    int n=4;
    int k=3;
    int ans=solve_SO(n,k);
    cout<<ans<<endl;
    return 0;
}