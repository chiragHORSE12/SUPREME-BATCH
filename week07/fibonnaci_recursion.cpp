#include<iostream>
using namespace std;

int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"enter the value whose fibonnaci you want too see ";
    cin>>n;

    int g=fib(n);
    cout<<"value at value "<<n<<"is :"<<g<<endl;
    return 0;
}