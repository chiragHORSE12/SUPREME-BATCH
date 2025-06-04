#include<iostream>
using namespace std;

int main(){
    
    int arr[5];
    cout<<"enter the element :";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    
    cout<<" the elemnt of array is:";
     for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<" the double of element is:";
     for(int i=0;i<5;i++){
        cout<<2*arr[i]<<" ";
    }
return 0;
}