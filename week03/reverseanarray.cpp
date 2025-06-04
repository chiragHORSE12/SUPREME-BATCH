#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={ 1,2,3,4,5,6,7,8,9,7};
    int size=10;
    reverse(arr,size);
    return 0;
}