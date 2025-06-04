#include<iostream>
#include<vector>
#include<queue>
using namespace std;  

class info {
    public:
    int data;
    int row;
    int col;

    // constructor bana rahe ha 
    info(int val,int c,int r){
        data=val;
        row=r;
        col=c;
    }

};
//custum compatetor 
class compare{
    public:
    bool operator()(info *a,info* b){
        return a->data > b->data;

    }

};
vector<int> merge_k_sorted(int arr[][4],int n,int k){
    priority_queue<info *,vector<info *>,compare > minheap;

    for(int i=0;i<k;i++){
        info * temp=new info(arr[i][0],i,0);
        minheap.push(temp);

    }
    vector<int> ans;

    while(!minheap.empty()){

        info* temp=minheap.top();
        int topelement=temp->data;
        int toprow=temp->row;
        int topcol=temp->col;
        minheap.pop();
        //cout<<"hello"<<endl;

        ans.push_back(topelement);
        
        if(topcol +1 < n){
            info* newinfo=new info(arr[toprow][topcol+1],toprow,topcol+1);
            minheap.push(newinfo);
        }
        //cout<<"at middle"<<endl;
    }
    return ans;

}

int main(){
    int arr[][4]={{1,3,5,7},
                  {2,4,6,8},
                  {0,9,10,11}
                 };
    int n=4;
    int k=3;
    cout<<"let's start"<<endl;
    vector<int> ans=merge_k_sorted(arr,n,k);
    // cout<<"mela h kya  "<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

