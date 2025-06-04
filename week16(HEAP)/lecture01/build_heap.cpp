#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int index =i;
    int left=2*i;
    int right=2*i+1;
    int largest=i;
    // left wala dekh lo
        if( left<= index && arr[largest]< arr[left]){
            largest=left;
        }
    //right wala dekh lo
        if(right <=index  && arr[largest] < arr[right]){
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
void build_heap(int arr[],int n){
    for(int i=n/2;i >0;i--){
        heapify(arr,n,i);
    }
}

int main(){
    int arr[]={-1,12,15,13,11,14};
    //int i=1;
    int n=5;
    build_heap(arr,n);
    // heapify(arr,n,i);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}