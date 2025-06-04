#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={1,2,3,4};
    int sizea=4;
    int b[]={5,6,7,3,2};
    int sizeb=5;
    vector<int> ans;
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(a[i]==b[j]){
                b[j]=-1;
            }
        }
    }
     for(int i=0;i<sizea;i++){
        ans.push_back(a[i]);
     }
     for(int j=0;j<sizeb;j++) {
        if(b[j]!=-1){
         ans.push_back(b[j]);
        }
     }
       for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}