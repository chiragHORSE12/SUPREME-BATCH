#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6};
    int sizea=6;
    int b[]={1,2,3,4,5,6};
    int sizeb=6;
    for(int i=0;i<sizeb;i++){
        for(int j=0;j<sizeb;j++){
          if(a[i]+b[j]==9){
           cout<<"("<<a[i]<<","<<b[j]<<")"<<" ";
           cout<<"("<<b[j]<<","<<a[i]<<")"<<" ";
          }
        }
    }
    return 0;
}