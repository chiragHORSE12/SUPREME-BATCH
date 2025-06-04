#include<iostream>
#include<vector>
using namespace std;

int binaryseach(int ar[],int size,int target){

    int start =0;

    int end=size-1;

    int mid=start+(end-start)/2;

    int element=ar[mid];
    while(start<=end){
    int element=ar[mid];
    if(element==target){
        return  mid;

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
    
    return -1;
    

}    

int main(){
    int ar[]={2,4,6,8,10,12,14,16};
    int size=9;
    int target =8;
    int indexoftarget=binaryseach(ar,size,target);

    if(indexoftarget==-1){

        cout<<" target not found"<<endl;
    }
    else{
        cout<<"target found at index number "<<" "<<indexoftarget<<" "<<"in the array"<<endl;
    }
    return 0;
}