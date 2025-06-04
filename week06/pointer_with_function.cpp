#include<iostream>
using namespace std;

void solve(int arr[]){
    cout<<"size of arr is:"<<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    arr[2]=7;


    }

int main(){
    int arr[10]={1,2,3,4};
    cout<<"size of arr:  "<<sizeof(arr)<<endl;
    cout<<"address of arr:  "<<&arr<<endl;
    cout<<"arr: "<<arr<<endl;
    cout<<"array arr is:  "<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"calling function "<<endl;
    solve(arr);
    cout<<"wapas ane k bad :"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}