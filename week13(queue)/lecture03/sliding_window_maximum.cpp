#include<iostream>
#include<vector>
#include<deque>

using namespace std;
vector <int> solve(vector<int> &val,int k){
    vector<int> ans;
    deque <int> dq;

    for(int i=0;i<k;i++){
        //chotte value ko remove kar n k leye
        while(! dq.empty() && val[i] >= val[dq.back()]){
            dq.pop_back();
        }
        //insert index of maximum value 
        dq.push_back(i);
    }
    //store answer into th answer
    ans.push_back(val[dq.front()]);

    //age wale window par chale jate h 
    for(int i=k;i<val.size();i++){
        //out of window wale k leye 
        while(! dq.empty() && i-dq.front() >= k){
            dq.pop_front();
        }
        //chotte value ko remove kar n k leye
        while(! dq.empty() && val[i] >= val[dq.back()]){
            dq.pop_back();
        }
        //insert index of maximum value 
        dq.push_back(i);
    
    //current value ka answer bhi dena h
    ans.push_back(val[dq.front()]);
    }
    return ans;
}

int main(){
    vector<int> ans={1,3,-1,-3,5,3,6,7};
    int k=3;
    vector<int> a= solve(ans,k);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;;
    return 0;
}
