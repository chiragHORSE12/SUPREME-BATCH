#include<iostream>
using namespace std;
void merge(int* arr,int s,int e){

    int mid=s+(e-s)/2;
    //find size of both the array
    int len1= mid-s+1;
    int len2= e-mid;

    //dynamic memory allocation 

    int* left=new int[len1];
    int* right=new int[len2];
    //index number

    int leftindex=0;
    int rightindex=0;
    int mainarrayindex=s;

    while(leftindex < len1 && rightindex <len2 ){
        if(left[leftindex] <right[rightindex]){
            arr[mainarrayindex] =left[leftindex];
            cout<<arr[mainarrayindex]<<" ";
            mainarrayindex++;
            leftindex++;
            
        }
        else{
            arr[mainarrayindex] =right[rightindex];
            mainarrayindex++;
            rightindex++;
            }
    }
    //copy logic for left element
    while(len1 > leftindex){
        arr[mainarrayindex] =left[leftindex];
            mainarrayindex++;
            leftindex++;

        }
    //copy logic for right element
    while(len2 > rightindex){
        arr[mainarrayindex] =right[rightindex];
            mainarrayindex++;
            rightindex++;
        }
}


void mergesort(int* arr,int s,int e){
    //base case
    // 1 case :s == e  -> single element
    // 2 case :s < e   -> invalid case
    if(s >= e){
        return;
    }
    //break karo 
    int mid=s+(e-s)/2;

    //left part sort karo
    mergesort(arr,s,mid);

    //right part sort karo
    mergesort(arr,mid+1,e);

    //dono part sort karo
    merge(arr,s,e);
}

int main(){
    int arr []={38,28,3,6,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int s=0;
    int e=n-1;
    //calling functio for merge sort
    mergesort(arr,s,e);
    //printing an array
    cout<<"hello"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}