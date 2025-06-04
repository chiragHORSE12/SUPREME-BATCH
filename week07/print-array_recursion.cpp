#include<iostream>
using namespace std;

void printarray(int arr[],int n,int i){
    //base condition hai ye wale
    if(i>=n){
        return ;
    }
    //processing condition 
    cout<<arr[i]<<"  ";
    //recursion re-call
    //baki recursion sambhal lega 
    printarray(arr,n,i+1);

}

int main(){
    int arr[]={10,20,30,40,50,60};
    int i=0;
    int n=6;

    printarray(arr,n,i);
}