#include<iostream>
#include<vector> 
using namespace std;

// space optimization solution -2 
int getvalue_SO2(vector<int> weight,vector<int> value,int index,int capacity){
    //step 1: create  1d vector
    vector<int> curr(capacity+1,0);

    //jo bhi value ho use curr wale vector m dal ne h
    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            curr[w]=value[0];
        }
        else{
            curr[w]=0;
        }
    }
    //index ka loop h
    for(int i=1;i<=index;i++){
    //capacity wala loop ulta chala leya R->L 
    //kyu k L-R wale prev value over write ho jate the 
        for(int w=capacity;w>=0;w++){ 
            //capacity ka loop h--  ulta chala kar space bachaya h 
            int include=0;
            if(weight[i] <= w){
                include = value[i] + curr[w-weight[i]];
        
            }
            int exclude = 0 + curr[w];
            curr[w] = max(include,exclude);
        }
        
    }
    return curr[capacity];
}

int main(){
    vector<int> weight{4,5,1};
    vector<int> value{1,2,3};
    int capacity=4;
    int index=3;
    cout<<"maximum value with weight: "<<getvalue_SO2(weight,value,index-1,capacity);
    return 0;

}
