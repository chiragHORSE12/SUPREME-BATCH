#include<iostream>
using namespace std;
void se(int*& m){
    m=m+1;

}
void s(int a){
    cout<<"answer as pass by value:";

    a++;
}
void solve(int& val){
    //pass by refference 
    val++;
    cout<<"answer as pass by refference:";
}

int main(){
    int a=5;
    int* b=&a;
    cout<<"before"<<b<<endl;
    se(b);
    cout<<"after"<<b<<endl;
    s(a);
    cout<<a<<endl;
    solve(a);
    cout<<a<<endl;
    s(a);
    cout<<a<<endl;
    return 0;
}