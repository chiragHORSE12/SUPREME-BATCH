#include<iostream>
using namespace std;
int findquest(int dividend,int divisor){
int s=0;
int e=divisor;
int a=  1;
int mid =s+(e-s)/2;
while(s<=e){
    if(mid*divisor==dividend){
    return mid;
    }
    if(mid*divisor<dividend){
     e=mid-1;
    }
    else{
    a=mid;
    s=mid+1;
    }
  mid=s+(e=s)/2;
  return a;
  } 
  return a;
}

 int main(){
    int dividend=59 ;
    int divisor=8;

    int ans=findquest(dividend,divisor);
    cout<<" the question of dividend is : ";
    cout<<ans;
    return 0;
}