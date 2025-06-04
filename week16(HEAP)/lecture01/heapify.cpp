#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int index =i;
    int left=2*i;
    int right=2*i+1;
    int largest=i;
    // left wala dekh lo
        if(i < left && arr[largest]< arr[left]){
            largest=left;
        }
    //right wala dekh lo
        if(i < right && arr[largest] < arr[right]){
            largest=right;
        }

        if(largest != i){
            // swap karo 
            swap(arr[index],arr[largest]);
            //value update
            i=largest;
             //recursive call
             heapify(arr,n,i);
        }   
}

int main(){
    int arr[]={-1,12,50,60,30,40,52};
    int i=1;
    int n=7;
    heapify(arr,n,i);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}