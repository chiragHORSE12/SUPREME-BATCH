#include<iostream>
#include<vector>

using namespace std;
void solve(vector<string> &ans,string digits,int index,string output,vector<string> mapping){
    //base case 
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }
    //ek case solve kardo 
    int digit=(digits[index]) -'0';
    string valueincharacter =mapping[digit]; 
    for(int i=0;i<valueincharacter.length();i++){
        char ch =valueincharacter[i];
        //push into the output
        output.push_back(ch);
        (ans,digits,index+1,output,mapping);
        //back tarck kardo
        output.pop_back();
    }
return;
}

int main(){
    string digits;
    cout<<"enter the string :";
    cin>>digits;
    vector<string> ans;
    cout<<"the digit enter by you is of length:";
    cout<<digits.length()<<endl;
    if(digits.length() ==0){
       cout<<"empty !!!"<<endl;
        }
    string output;        
    vector<string> mapping;
    mapping[2]="abc";

    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="wxyz";
    int index=0;
    solve(ans,digits,index,output,mapping);
    for(auto val:ans){
        cout<<val<<"  ";
    }
    cout<<endl;
    return 0;    

}