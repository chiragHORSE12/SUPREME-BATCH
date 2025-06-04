#include<iostream>
using namespace std;

int add(int a,int b){
    int result=a+b;
     return result;
}
int main(){
    int a;
    cout<<"enter the value of a:";
    cin>>a;
    int b;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"the sun of a and b is:";
    cout<<add(a,b);
    return 0;
}