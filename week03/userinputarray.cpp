#include<iostream>
using namespace std;

int main(){
    
    int arr[10];
    cout<<"enter the element :";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    
    cout<<" the elemnt of array is:";
     for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}