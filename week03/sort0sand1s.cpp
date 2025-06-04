#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{0,1,0,1,0,0,1,1,1,1,0,0,1,0,1,0,1};

    for(int i=0;i<arr.size();i++){
        if(i==0){
            i++;
          }
        else{
            //swap
            if(arr[i]<arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}