#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivotindex=s;
    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i] <=arr[pivotindex]){
            count++;  
        }
    }
    int rightindex=s+count;
    //swap two element and put pivot to right place
    swap(arr[pivotindex],arr[rightindex]);
    
    pivotindex=rightindex;
    int i=s;
    int j=e;
    while(i < pivotindex &&j>pivotindex){
        while(arr[i] < arr[pivotindex])
        i++;
    
        while(arr[j] > arr[pivotindex])
        j--;  
    }
    while(i < pivotindex &&j>pivotindex){
        swap(arr[i],arr[j]);
    }
return pivotindex;
}
void quicksort(int* arr,int s,int e){
    //base case
    if(s >= e){
        return ;
    }
    //parition logic
    int pivotindex= partition(arr,s,e);
    
//recurcive call lagao left side m or right side m
    //left ko divide kardo
    quicksort(arr,s,pivotindex-1);
    //right ko divide kardo
    quicksort(arr,pivotindex+1,e);
    
}

int main(){
    int arr[]={8,1,4,3,20,50,30};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n-1;
    quicksort(arr,s,e);
    cout<<"printing your answer:";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}