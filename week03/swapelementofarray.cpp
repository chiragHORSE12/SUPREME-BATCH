#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,5};
    int size=10;
    for(int i=0;i<size;){
        int temp;
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        cout<<arr[i]<<" ";
        cout<<arr[i+1]<<" ";
        i=i+2;
    }
    return 0;

}