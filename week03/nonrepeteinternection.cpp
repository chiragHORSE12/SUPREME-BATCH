#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,2,3,4,5,6,7,8};
    int sizea=8;
    int brr[]={2,2,4,6,8};
    int sizeb=4;
     vector<int> ans;
     for (int i=0;i<sizea;i++){
       for (int j=0;j<sizeb;j++){
        if(arr[i]==brr[j]){
            //mark
            brr[j]=-1;
            ans.push_back(arr[i]);
        
        
        }
      }
       
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
     

}