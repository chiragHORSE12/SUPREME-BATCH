#include<iostream>
using namespace std;
int main(){
    int ar[3][3]={{1,3,5},{2,4,6},{7,8,9}};
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<ar[j][i]<<" ";
        
        }
        cout<<endl;
    }

}