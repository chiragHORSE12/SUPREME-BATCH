#include<iostream>
using namespace std;

int stair(int n){
    if(n==0||n==1){
        return 1;
    }
    int ans=stair(n-1)+stair(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"enter the value from which you want to find number of ways ";
    cin>>n;

    int stairs=stair(n);
    cout<<"total number of way toreach destination is is :"<<stairs;
    return 0;

}