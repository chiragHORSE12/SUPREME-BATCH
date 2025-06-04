#include<iostream>
#include<vector> 
using namespace std;

// space optimization solution 
int getvalue_SO(vector<int> weight,vector<int> value,int index,int capacity){
    //step 1: create 2 1d vector
    vector<int> prev(capacity+1,0);
    vector<int> curr(capacity+1,0);

    for(int w=weight[0];w<=capacity;w++){
        if(weight[0]<=capacity){
            prev[w]=value[0];
        }
        else{
            prev[w]=0;
        }
    }

    for(int i=1;i<=index;i++){//index ka loop h
        for(int w=0;w<=capacity;w++){//capacity ka loop h 
            int include=0;
            if(weight[i] <= w){
                include = value[i] + prev[w-weight[i]];
        
            }
            int exclude = 0 + prev[w];
            curr[w] = max(include,exclude);
            
        }
        //galti yahi hoge (prev=curr) ese andar lekehege to
        prev=curr;
    }
    return prev[capacity];
}

int main(){
    vector<int> weight{4,5,1};
    vector<int> value{1,2,3};
    int capacity=4;
    int index=3;
    cout<<"maximum value with weight: "<<getvalue_SO(weight,value,index-1,capacity);

}

