#include<iostream>
using namespace std;

int main(){
    int col=3;
    int row=3;
    int arr[3][3]={{1,2,7},{3,4,8},{5,6,9}};
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
