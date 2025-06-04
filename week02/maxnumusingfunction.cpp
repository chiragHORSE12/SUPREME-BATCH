#include<iostream>
using namespace std;

int max(int a,int b){
    if(a>b){
        return a;
    }
    else
        return b;
}
void printa(int a){
    for(int i=0;i<a;i++){
    cout<<" WELCOME TO BROTHER'S STUD FARM  ";
    cout<<endl;
    
    }
}

int main(){
    // int a=77;
    // int b=98;
    // cout<< max(a,b);
    // return 0;
    
    int a;
    cout<<"enter the value to print a:";
    cin>>a;
    printa(a);
    return 0;
    }