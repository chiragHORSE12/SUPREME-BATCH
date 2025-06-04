#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void merge (int arr[],int brr[],int len1,int len2){
    priority_queue<int>pq;

    for(int i=0;i<len1;i++){
        pq.push(arr[i]);
    }
    for(int i=0;i<len2;i++){
        pq.push(brr[i]);
    }
    cout<<" printing the merged heap"<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}


int main(){
    int arr[]={100,50,60,10,15};
    int brr[]={11,16,20,40,30,35};
    int len1=5;
    int len2=6;
    merge(arr,brr,len1,len2);
    return 0;
}