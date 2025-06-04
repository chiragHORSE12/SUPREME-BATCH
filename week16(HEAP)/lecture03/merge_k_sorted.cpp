#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// khud ka data strucuture bana deya h
class info{
    public:
    int data;
    int row;
    int col;


    //constructor se value dal de h
    info(int val,int r,int c){
        int data=val;
        int row=r;
        int col=c;
    }

};
// custum compatitor
class compare{
    public:

    bool operator()(info* a,info* b){
        return a->data > b->data;
    }
};

vector<int> mergeksorted(int arr[][4],int k,int n){
    priority_queue<info* ,vector <info *>,compare > min_heap;

    //har array ka first element ko min heap m dal do 
    
    for(int i=0;i<k;i++){
        info* temp =new info(arr[i][0],i,0);
        min_heap.push(temp);
    }
    // single sorted array
    vector<int> ans;
    
    while(!min_heap.empty()){
        info* temp=min_heap.top();
        int topelement=temp->data;
        int toprow=temp->row;
        int topcol=temp->col;
        min_heap.pop();

        ans.push_back(topelement);
    
        if(topcol +1 < n){
        cout<<"hello "<<endl;
        info* ewinfo=new info(arr[toprow][topcol+1],toprow,topcol+1);
        cout<<"hello "<<endl;
        min_heap.push(ewinfo); 
        }
    }
return ans;
}

int main(){
    int arr[][4]={{1,3,5,7},
                  {2,4,6,8},
                  {0,9,10,11}
                  };
    int k=3;
    int n=4;
    vector<int> ans=mergeksorted(arr,k,n);

    for (auto i:ans){
     cout<< i <<" ";
    }
    cout<<endl;

    return 0;
}