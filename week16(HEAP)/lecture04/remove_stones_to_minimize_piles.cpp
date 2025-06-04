#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxheap;

        for(int i=0;i<piles.size();i++){
            maxheap.push(piles[i]);
        }
        while(k--){
            int maxelement=maxheap.top();
            maxheap.pop();
            maxelement=maxelement-(maxelement/2);
            maxheap.push(maxelement);
        }
        int sum=0;
        while(!maxheap.empty()){
            int temp=maxheap.top();
            maxheap.pop();
            sum=sum+temp;
        }
        return sum; 
}

int main(){
    int k=3;
    vector<int> arr={12,11,8,5};
    int ans=minStoneSum(arr,k);
    cout<<"after minimize the sum is : "<<ans<<endl;
    return 0;

}