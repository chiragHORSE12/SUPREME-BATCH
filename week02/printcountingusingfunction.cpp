#include<iostream>
using namespace std;
int counting(int a){
    for(int i=1;i<a;i++){
        cout<<i;
        cout<<endl;
    }
}
int main(){
    int z;
    cout<<" enter the ending value of counting:";
    cin>>z;
    cout<<counting( z );
    return 0;
}