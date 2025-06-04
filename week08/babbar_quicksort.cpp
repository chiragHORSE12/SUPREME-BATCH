#include<iostream>
#include<algorithm>
using namespace std;

int partition(int arr[],int s,int e){
    //step 1 choose an pivot element
    int pivotindex=s;
    int pivotelement=arr[s];
    //step 2 
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <= pivotelement)
        count++;
    }
    //jab hum loop se bahr jayege tab hume pivot element ke right possition mel jayege 
    int rightpossition=s+count;
    swap(arr[pivotindex],arr[rightpossition]);
    pivotindex=rightpossition;

    //left wala asre element pivot se chote ho or right wale sare element pivot element se bade ho
    int i=s;
    int j=e;
    while(i < pivotindex && j > pivotindex){
        while(  arr[i] <= pivotelement){
            i++;
        }
        while(arr[j] > pivotelement){
            j--;
        }
        
    
        // 2case ho sakte ha ->
        //koe change nhi karna padega 
        //change kar na padega 
        if(i < pivotindex && j > pivotindex){
            swap(arr[i],arr[j]);
        }
    }    

return pivotindex;
}

void quicksort(int arr[],int s,int e){
    //base case 
    if(s >= e){
        return;
    }
    
    //partition logic 
    int p=partition(arr,s,e);
    cout<<"partition"<<endl;

    //recursive call laga do left wale k leye 
    quicksort(arr,s,p-1);
    
    //recursive call laga do right wala part ke leya
    quicksort(arr,p+1,e);

}

int main(){
    int arr []={8,33,1,1,3,4,44,4,20,50,30};
    int n=sizeof(arr)/sizeof(int);
    int s=0;
    int e=n-1;

    quicksort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}