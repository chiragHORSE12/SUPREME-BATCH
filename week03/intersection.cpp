#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2,4,5,8,9};
    int sizea=6;
    int brr[]={1,3,5,7,9};
    int sizeb=5;
    vector<int> ans;

    for(int i=0; i<sizea;i++){
        for (int j=0; j<sizeb;j++)
         {
            if(arr[i]==brr[j])
            {
                ans.push_back(brr[j]);
            }
         } 
    }
    for(int i=0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
   
   return 0;
}