#include<iostream>
#include<vector>
using namespace std;

int get_value_tabular(int weight[],int value[],int capacity,int index){
    //step 1:
    vector<vector<int>> dp(index+1,vector<int>(capacity+1,0));
    //base case 
    for(int w=0;w<=capacity;w++){
       if(weight[0] <= capacity){
        dp[0][w]=value[0];
       }
       else{
        dp[0][w]=0;
       }  
    }

    // use 2 for loop 1 ->index 2->weight
    for(int ind=1;ind<=index;ind++){
        for(int wt=0;wt<capacity;wt++){
            int include=0;
            if(weight[ind] <= capacity){
                include = value[ind] + dp[ind-1] [capacity -value[ind]];
            }
            int exclude = dp[ind-1] [capacity];
        dp[ind][capacity]=max(include,exclude);
        }
        
    }
    return dp[index][capacity];
}

int main(){
    int weight[]={4,5,1};
    int value[]={1,2,3};
    int index=3;
    int capacity=4;
    cout<<"Maximum value in knapsack is :"<<get_value_tabular(weight,value,capacity,index-1);
    return 0;
}