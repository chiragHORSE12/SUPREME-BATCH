#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i) {
        int index = i;
        int leftIndex = 2*i;
        int rightIndex = 2*i+1;
        int largest = index;

        if(leftIndex <= n &&
         arr[largest] < arr[leftIndex]) {
                largest = leftIndex;
        }
        if(rightIndex <= n && arr[largest] < arr[rightIndex]) {
                largest = rightIndex;
        }

        if(index != largest) {
                //left ya right child me se koi > hogya currentNode se
                swap(arr[index], arr[largest]);
                index = largest;
                heapify(arr, n, index);
        }
}
void swp(int arr[],int n){
    int index=n;
    while (n != 1 ){
     swap(arr[index],arr[1]);
     index--;
     n--;
     heapify(arr,n,1);
    }
}

int main(){
    int arr[]={-1,100,60,50,20,30};
    int n=5;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swp(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

