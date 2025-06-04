#include<iostream>
using namespace std;
void max(int arr[],int size ,int max){
    for(int i=0;i<9;i++){
        if(arr[i]>max){
            max=arr[i];
        }
      
    }
      cout<<"max elemet in the array is :";
      cout<<max;
      cout<<endl;

}

int main(){
    int arr[]={45,56,33,4,55,35,34,22,91,12,21};
    int size=10;
    int maxi=0;
    max(arr, size , maxi );
    return 0;
}