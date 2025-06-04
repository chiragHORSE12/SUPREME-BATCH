#include<iostream>
#include<vector>

using namespace std;
void solve(vector<string> &ans,int used_open,int used_close,int rem_open, int rem_close,int n,string output){
    //base case 
    if(rem_open == 0 && rem_close == 0){
        ans.push_back(output);
        return;
    }
    //ek case solve kar do bhai bake ka recursion dekh lega
    //include open bracket 
    if(rem_open > 0){
        //recursive call lagado
        output.push_back('(');
        solve (ans,used_open+1,used_close,rem_open-1,rem_close,n,output);
        //back track kardo
         output.pop_back();
         }

    //include close bracket
    if(used_open > used_close){
        //recursive call laga do
        output.push_back(')');
        solve (ans,used_open,used_close+1,rem_open,rem_close-1,n,output);
        //back track kardo 
         output.pop_back();
    }



}

int main(){
    int n;
    cout<<"enter the value of input parantheses:";
    cin>>n;
    vector<string>ans(n);
    int used_open=0;
    int used_close=0;
    int rem_open = n;
    int rem_close = n;
    string output="";
    solve (ans,used_open,used_close,rem_open,rem_close,n,output);
    for(auto val:ans){
        cout<<val<<endl;
    }
    
    return 0;
}