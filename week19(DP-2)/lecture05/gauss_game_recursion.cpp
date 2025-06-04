#include<iostream>
using namespace std;

int get_minamount(int start,int end){

    //base case 
    if(start >= end){
        return 0;
    }
    int ans=INT32_MAX;
    for(int i=start;i<=end;i++){
        ans=min(ans,i+max(get_minamount(start,i-1),get_minamount(i+1,end)));
    }
return ans;
}   

int main(){
    int s=0;
    int e=10;
    cout<<"minimum amount require to win game is : "<<get_minamount(s,e)<<endl;
    return 0;
}