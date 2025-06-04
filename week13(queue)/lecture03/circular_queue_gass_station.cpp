#include<iostream>
#include<vector>
using namespace std;

int solve(vector <int> &gas,vector <int> &cost){
    //available petrol
    int balance =0;
    //petrol need to reach
    int deficient=0;
    //chalu kaha se kar na h
    int start=0;

    for(int i=0;i<gas.size();i++){
        balance=balance+gas[i]-cost[i];
        if (balance < 0){
            deficient +=balance;
            start=i+1;
            balance=0;
        }
    }
    if(balance+deficient >= 0){
        return start;
    }
    else{
        return -1;
    }
}

int main(){
    vector <int> gas {1,2,3,4,5};
    vector <int> cost{3,4,5,1,2};

    int ans= solve(gas,cost);
    cout<<"the starting point of the cycle is :"<<ans<<endl;

return 0;
}