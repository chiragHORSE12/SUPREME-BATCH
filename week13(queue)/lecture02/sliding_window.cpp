#include<iostream>
#include<deque>
using namespace std;

void solve(int arr[],int k,int n){
    deque <int> q;
    
    //proccess first window of size k
    for(int i=0;i<k;i++){
        if(arr[i] < 0){
            q.push_back(i);
        }
    }
    //remaining window 
    for(int i=k;i < n;i++){
        //purane window ka answer dedo 
        if(q.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
        // out of window 
        if((! q.empty())&&(i- q.front() >= k)){
            q.pop_front();
        }
        //check and insert element 
        if(arr[i] < 0){
            q.push_back(i);
        }
    }
    //last sliding window answer 
    if(q.empty()){
            cout<<"0"<<" ";
        }
        else{
            cout<<arr[q.front()]<<" ";
        }
}
int main(){
    int arr[]={12,-1,-7,8,-15,30,16,28};
    int k=3;
    int n=8;
    solve(arr,k,n);
return 0;
}
