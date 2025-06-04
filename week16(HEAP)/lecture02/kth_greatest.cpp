#include<iostream> 
#include<queue>
using namespace std;

int kth(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;k<n;i++){
        int curr=arr[i];
        if(curr > pq.top()){
            // pop kardo top
            pq.pop();
            pq.push(curr);
        }
    }
    int ans=pq.top();
    return ans;
}

int main(){
    int arr[]={10,8,70,9,40,60,1};
    int k=2 ;
    int n=7;
    int ans=kth(arr,k,n);
    cout<<" k th samllest number is:"<<ans<<endl;
    return 0;
}