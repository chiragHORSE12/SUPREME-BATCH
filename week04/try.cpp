#include<iostream>
using namespace std;
int findquest(int dividend,int divisor,int arr[8]){
int s=0;
int e=dividend;
int ans=1;
int mid =s+(e-s)/2;
while(s<=e){
    if(divisor*mid==dividend)
    return mid;
    
     if(divisor*mid>dividend){
        e=mid-1;
    }
    else{
        ans=mid;
     }
    mid=s+(e=s)/2;
  } 
return ans;
}

 int main(){
    int dividend=56 ;
    int divisor=8;
    int arr[]={1,2,3,4,5,6,7,8};
    int ans=findquest(dividend,divisor,arr);
    cout<<" the question of dividend is : ";
    cout<<ans;
    return 0;
}