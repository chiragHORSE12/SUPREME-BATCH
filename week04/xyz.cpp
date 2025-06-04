#include<iostream>
using namespace std;
int solve(int ar[17]){
    int s=0;
    int e=16;
    int mid=s+(e-s)/2;
    int temp;

    while(s<=e){
        if(s==e){
            return s;
        }
        if(mid%2==0){
            //even
           if( ar[mid]==ar[mid+1]){
            s=mid+2;
           }
           else{
            temp=ar[mid];

           }

        }
        if(mid%2!=0){
            //odd
            if(ar[mid-1]==ar[ mid]){
                s=mid+1;
                
            }
            else{
                e=mid-1;
            }
        }
        return temp;
    }
    return temp;
}


int main(){
    int ar[]={1,1,2,2,3,3,4,4,5,5,6,6,7,8,8,9,9};
     int ans=solve(ar);
    cout<<"odd element is : "<<" "<< ans;
     return 0;
  
 
}