#include<iostream>
#include<stack>
using namespace std;

int long_par(string s){

    int maxlen=0;
    stack <int> st;
    st.push(-1);
    int length;
    for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch =='('){
                st.push(i);
            }
            else{
                st.pop();
;                if(st.empty()){
                    st.push(i);
                }
                else{
                    length=i-st.top();
                    maxlen=max(length,maxlen);
                }
            }
    }
    return maxlen;  
}

int main(){
    string s;
    cout<<"enter your string :";
    cin>>s;
    cout<<"longest valid parenthesis is :"<<long_par(s);
    return 0;
}