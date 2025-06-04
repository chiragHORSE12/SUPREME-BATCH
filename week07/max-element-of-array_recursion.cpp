#include<iostream>
using namespace std;
void findmax(int arr[],int i,int size,int& maxi){
    //base condition 
    if(i>=size){
        //array yade pura traverse ho gaya to wapas aajao mere bhai
        return;
    }
    //processing

    if(arr[i]>maxi){
        //bada hoto to update kR DO 
        maxi =arr[i];
    }
    //recurson recall
    findmax(arr,i+1,size,maxi);
    
}


int main(){
    int arr[]={12,2,67,37,863,754,33,4,5,66,75,324,25,5454,3432453};
    int size=15;
    int i=0;
    int maxi=0;

    findmax(arr,i,size,maxi);
    cout<<"maximum element of the array is : "<<maxi<<endl;
    
    return 0;
}