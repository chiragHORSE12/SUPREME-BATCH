#include<iostream>
#include<vector>
using namespace std;

int binaryseach(int ar[],int size,int target){

    int start =0;

    int end=size-1;

    int mid=start+(end-start)/2;
    int ans;
    int element=ar[mid];
    while(start<=end){
    int element=ar[mid];
    if(element==target){
        ans=mid;
        end=mid-1;

    }
    else if(element<target){
        //searchinleft
        start=mid+1;
    }
    else
    {
        //searchinrihgt
        end=mid-1;
    }
    mid=(start+end)/2;
 }
    
    //elemntnotfound
    
    return ans;
    

} 
int search(int ar[],int size,int target){

    int start =0;

    int end=size-1;

    int mid=start+(end-start)/2;
    int ans=-1;
    int element=ar[mid];
    while(start<=end){
    int element=ar[mid];
    if(element==target){
        ans= mid;
        start=mid+1;

    }
    else if(element<target){
        //searchinleft
        start=mid+1;
    }
    else
    {
        //searchinrihgt
        end=mid-1;
    }
    mid=(start+end)/2;
 }
    
    //elemntnotfound
    
    return ans;
    

}      

int main(){
    int ar[]={2,4,6,6,8,8,8,8,10,12,14,16};
    int size=11;
    int target =8;
    int indexoftarget=binaryseach(ar,size,target);
    int indexoflasttarget=search(ar,size,target);
    int total=indexoflasttarget-indexoftarget;

    cout<<"total occurance of element "<<target<<"is"<<total+1;
    return 0;
}