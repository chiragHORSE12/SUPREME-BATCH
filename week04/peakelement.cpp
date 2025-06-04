#include<iostream>
using namespace std;

int findpeak(int ar[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    // int mid=start+(end-start)/2;
    // int element1=ar[mid-1];
    // int element2=ar[mid];
    // int element3=ar[mid+1];
    {
    if(ar[mid]<ar[mid+1]){
         start=mid+1;

    }

    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
  }
  return start;
}
 
int main(){
    int ar[]={1,2,3,4,5,11,9,5,6,7,5,4,2};
    int size=12;
    int peakelement=findpeak(ar,size);
    cout<<"the peak element in the array is:"<<" "<<peakelement;
    return 0;
}
