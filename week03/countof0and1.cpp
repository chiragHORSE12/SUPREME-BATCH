#include<iostream>
using namespace std;
void num01(int arr[],int size,int num0,int num1){
    for( int i=0; i< size;i++){
        if(arr[i]==0){
            num0++;
        }
        else{
            num1++;
        }
    }
    cout<<" number of 0 is :"<<" "<<num0;
    cout<<endl;
    cout<<" number of 1 is :"<<" "<<num1;
    cout<<endl;
}

int main(){
    int arr[]={0,1,0,1,1,1,1,1,1,1,0,0,0,1,0,1};
    int size=16;
    int num0=0;
    int num1=0;
    num01(arr,size,num0,num1);

}