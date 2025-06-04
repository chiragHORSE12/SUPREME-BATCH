#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int>& weight,vector <int>& value,int capacity,int index ){

    //base case only one item 
    if(index == 0){
        if(weight[0] <= capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }
    // include/exclude principal
    int include=0; 
    if(weight[index] <= capacity){
       include=value[index]+solve(weight,value,capacity-weight[index],--index);
    }
    
    int exclude=0+solve(weight,value,capacity,--index);

    int ns= max(include,exclude);

    return ns;
}

int main(){
    vector<int> weight{4,5,1};
    vector<int> value{1,2,3};
    int capacity=4;
    int i=weight.size();
    int ans=solve(weight,value,capacity,i-1);
    cout<<ans<<endl; 
    return 0;
}