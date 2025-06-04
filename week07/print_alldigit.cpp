#include<iostream>
using namespace std;

void print(int a){
    
    //base case 
    if(a==0){
        return;
    }
    int b=a%10;
    a=a/10;
    print(a);
    cout<<b<<" ";
}

int main(){
    int a;
    cout<<"enter your integer value:";
    cin>>a;
    print (a);

    return 0;
}