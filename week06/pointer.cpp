#include<iostream>
using namespace std;

int main(){
    int z=6;
    int x=8;
    cout<<"value of z is :"<<z<<endl; //6
    cout<<"value of &z is :"<<&z<<endl;
    cout<<"value of x is :"<<x<<endl;//8
    cout<<"value of &x is :"<<&x<<endl;
    int a=400;
    int* ptr =&a;
    cout<<"size of integer pointer:"<<sizeof(ptr)<<endl;//4
    char c='a';
    char* ctr = &c;
    cout<<"size of character pointer:"<<sizeof(ptr)<<endl; //4
    // declare null value as 0
    int* gtr =0;
    // declare null pointer 
    int* etr=nullptr;
    int* coptr=ptr;

    // cout<<(* ptr)*2<<endl; //800
    // cout<<(* ptr)+2<<endl; //402
    // cout<<++(* ptr)<<endl;//401
    // cout<<(* ptr)++<<endl;//401
    cout<<(* coptr)<< endl;
    return 0;
}