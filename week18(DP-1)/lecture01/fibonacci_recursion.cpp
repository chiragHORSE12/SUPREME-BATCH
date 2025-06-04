#include<iostream>
using namespace std;

int recursive(int n){
    //base case
    if(n == 1 || n == 0){
        return n;
    }
    int ans = recursive(n-1) +recursive(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int ans=recursive(n);
    cout<<"fibonacii value of "<<n<<" is "<<ans<<endl;
    return 0;
}
