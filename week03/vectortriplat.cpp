#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={10,20,30,40,50,60};
    int sizea=6;
    vector<int> ans;
    for(int i=0;i<sizea;i++){
        for(int j=i+1;j<sizea;j++){
                if(a[i]+a[j]+a[k]==80){
                cout<<"("<<a[i]<<","<<a[j]<<","<<a[k]<<")";
                }
            }
        }

    }
    return 0;
}