#include<iostream>
using namespace std;

void print(int n){

    //base case
    if(n==0){
        return;
    }
    //processing 
    cout<<n<<" ";
    //recurcive function
    print (n-1);
}
int main(){
    int a;
    cout<<" enter the value to start counting :";
    cin>>a;
    print(a);
    return 0;  
}