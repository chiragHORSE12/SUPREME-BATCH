#include<iostream>
#include<vector>
using namespace std;
void solve(vector<string> &output,int n,string answer,int open ,int close ){
    //base case
    if(open == 0 && close == 0){
        output.push_back(answer);
        return;
    } 
    //ek case solve kar bake ka recusion dek lega

    //include karo open bracket
    if(open > 0){
        //recursive call 
        //output.push_back('(');
        solve(output,n,answer +'(',open-1,close);
        //back track
        output.pop_back();
    }
     //include karo close  bracket
    if(close < open){
        //output.push_back(')');
    solve(output,n,answer,open,close -1);
    //back track
        output.pop_back();
    }
}

int main(){
    int n;
    cout<<"enter the no. of pair of parentheses as solution:";
    cin>>n;
    string answer = "";
    vector<string>output(n);
    int open =n;
    int close=n;
    solve (output,n,answer,open,close);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}