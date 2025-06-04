#include<iostream>
using namespace std;

int compare(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    if(a<b && b>c){
        return b;
    }
    if(c>b && a<c){
        return c;
    }

}
int main(){
    int a;
    int b;
    int c;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"enter the value of c:";
    cin>>c;
    cout<< "max out of 3 number is:";
    cout<<compare( a,b,c );
    return 0;
}