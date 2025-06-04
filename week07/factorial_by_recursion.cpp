#include<iostream>
using namespace std;

int factorial(int n){
    //manodatiy step 
    cout<<"function is called for n="<<n<<endl;
    // step :1base condition 

    if(n==1){
        return 1;
    }
    // step 2:recursive call
    
    int ans=n*factorial(n-1);
    //factorial(n-1) ye choti problem of simmilar type
    //ans bigger problem hai 

    return ans;

}

int main(){
    int a;
    cout<<"enter the value of a";
    cin>>a;
    int fact=factorial(a);
    cout<<"the factorial of a is:"<<fact<<endl;
    return 0;
}