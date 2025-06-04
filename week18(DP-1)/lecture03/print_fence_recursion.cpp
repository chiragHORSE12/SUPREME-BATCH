#include<iostream>
using namespace std;

int solveusingrecursion(int n,int k){
    //base cases
    if(n ==1){
        return k;
    } 
    if(n == 2){
        return (k + k*(k-1));
    }
    int ans=(solveusingrecursion(n-2,k) +solveusingrecursion(n-1,k))*(k-1);
    return ans;
} 

int main(){
    int n=4;
    int k=3;
    int  ans=solveusingrecursion(n,k);
    cout<<ans<<endl;
}
