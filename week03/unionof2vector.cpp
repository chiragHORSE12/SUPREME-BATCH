#include<iostream>
#include<vector>
using namespace std;
 


int main(){
    int arr[]={1,3,5,7,9};
    int sizea=5;
    int brr[]={2,4,6,8};
    int sizeb=4;

    vector<int> ans;
    //push all element of to vector
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);

    }
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);

    }
    cout<<" the union of two vector is:";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}
