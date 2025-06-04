#include<iostream>
using namespace std;

void element(int ar[],int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int element1=ar[mid];
    int element=ar[mid-1];
    int element2=ar[mid+1];
    if((element1-element)== (element2-element1)){
        

    }

}

int main(){
    int ar[]={1,2,3,4,6,7,8,9};
    int size=8;
    int missing=element(ar,size);
}