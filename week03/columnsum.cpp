#include<iostream>
using namespace std;

void printsum(int arr[3][3],int row,int col){
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[j][i];
        }
        cout<<"the sum of row number "<<i+1<<"is"<<sum<<endl;
    }
}
int main(){
    int row=3;
    int col=3;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printsum(arr,row,col);
}
