#include<iostream>
using namespace std;

void find(int arr[3][3],int key,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key==arr[i][j]){
                cout<<"element is present ";
            }
          }
    }
    
}

int main(){
    int row=3;
    int col=3;
    int key=8;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    find(arr,key,row,col);
return 0;
}
