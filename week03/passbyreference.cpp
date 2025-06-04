#include<iostream>
using namespace std;

 int printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
    cout<<endl;
 }
  void incr(int arr[],int size){
    arr[0]=arr[0]+ 10;
    arr[1]=arr[2]+10;
     printarr( arr,size);

 }

int main(){
    int arr[]= { 3,4,5};
    int size =3;
    incr(arr,size);
    printarr(arr,size);
}