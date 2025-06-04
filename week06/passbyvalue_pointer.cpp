#include<iostream>
using namespace std;
void util(int* b){
    //pass by value function
    b=b+1;
}
void utill(int* b){
    //pass by value function
    *b=*b+1;
}

int main(){
    int a=5;
    int* b=&a;

    cout<<"before"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<* b<<endl;

    util(b);

    cout<<"after pass by value"<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<* b<<endl;

    utill(b);

    cout<<"after pass by refference"<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<* b<<endl;
    return 0;
}

