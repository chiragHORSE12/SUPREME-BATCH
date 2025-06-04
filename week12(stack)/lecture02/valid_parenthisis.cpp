#include<iostream>
#include<stack>
using namespace std;

bool valid_paranthesis(string st){
    stack <char> s;
    for(int i=0;i < st.length();i++){
        char ch=st[i];
        //opening bracket 
        if(ch =='('||ch =='{'||ch =='['){
            s.push(ch);
        }
        else{
            //closing bracket 
            if(ch ==')'&& s.top()=='('){
                //matching bracket
                s.pop();
            }
            else if((ch ==']'&& s.top()=='[')){
                //matching bracket
                s.pop();
            }
            else if(ch =='}'&& s.top()=='{'){
                //matching bracket
                s.pop();
            }
            else{
                //not matching bracket
                return false;
            }
        }
    }
    //check stack is empty or not
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string st;
    cout<<"enter the valid expression :";
    cin>>st;
    cout<<"entered expression is valid:"<< valid_paranthesis(st);
    return 0;
}