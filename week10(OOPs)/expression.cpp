#include<iostream>
#include<stack>

using namespace  std;


int main(){
    string a="12/35/*45/364";
    for(int i=0;i<a.size();i++){
        if(a[i] == '/'||a[i] =='*'){
            cout<<a[i]<<endl;
            i++;
        }
        int e=a[i]-'0';
        cout<<e<<endl;
    }

}
