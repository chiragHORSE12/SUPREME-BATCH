#include<iostream>
using namespace std;
void printsum(int arr[4][4],int row,int col){
     
    for(int i=0;i<row;i++){
         int sum=0;
        for(int j=0;j<col;j++){
            sum=sum+arr[i][j];
        }
        cout<<"sum of row number "<<i+1<<"is"<<sum<<endl;
    }
}

int main(){
    int row=4;
    int col=4;
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printsum(arr,row,col);
    return 0;
}