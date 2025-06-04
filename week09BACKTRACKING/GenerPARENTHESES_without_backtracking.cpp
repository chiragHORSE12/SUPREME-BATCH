#include<iostream>
#include<vector>
#include<string>

using namespace std;
void solve(vector<string> &output,int n,string answer,int used_open ,int used_close,int rem_open,int rem_close ){
    //base cas
    if(rem_open == 0 && rem_close == 0){
        output.push_back(answer);
        return;
    } 
    //ek case solve kar bake ka recusion dek lega

    //include karo open bracket
    if(rem_open > 0){
        //recursive call 
        //output.push_back('(');
        solve(output,n,answer+'(' ,used_open+1,used_close,rem_open-1,rem_close);
        //back track
        //answer.pop_back();
    }
     //include karo close  bracket
    if(used_close < used_open){
        //output.push_back(')');
    solve(output,n,answer +')',used_open,used_close+1,rem_open,rem_close-1);
    //back track
        //answer.pop_back();
    }
}

int main(){
    int n;
    cout<<"enter the no. of pair of parentheses as solution:";
    cin>>n;
    string answer = "";
    vector<string>output;
    int used_open =0;
    int used_close=0;
    int rem_open = n;
    int rem_close = n;
    solve (output,n,answer,used_open,used_close,rem_open,rem_close);
    
    for(auto val:output){
        cout<<val<<" "<<endl;
    }
    cout<<endl;
    return 0;
}