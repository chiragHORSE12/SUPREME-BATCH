#include<iostream>
using namespace std;
int findvalue(int ar[],int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
   
    while(s<=mid){
    
    if(ar[mid]==target){
        return mid;
    }
    
    if(ar[mid-1>=0]==target){
        return mid-1;
     }
    
    if(ar[mid+1<=e]==target){
        return mid+1;
     }
    
     if(target>ar[mid+1]){
        s= mid+2;
        
    }
    else{
       e= mid-2; 
    }
    
    mid=s+(e-s)/2;
  } 
  return -1;
}



int main(){ 
    int ar[]={1,3,2,5,4,6,8,7,9};
    //{1,2,3,4,5,6,7,8,9}
    int size=9;
    int target=9;
    int find=findvalue(ar,size,target);
        cout<<"target is found at"<<find;
    return 0;

}
