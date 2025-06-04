#include<iostream>
using namespace std;
void printnum(int a,int b){
    for(int i=a;i<b;i++){
        cout<<i;
        cout<<endl;
    }
}
int main(){
    int a=5;
    int b=10;
    printnum(a,b);
    cout<<a;

    return 0;
}