#include<iostream>
using namespace std;
bool isprime(int i){
    if(i<=1){
        return  false;
    }
    for(int j=2;j<i;j++){
        if(i %j == 0){
            return false;
        }
    }
    return true;
}

int main(){
     int n;
     cout<<"enter the value of n :";
     cin>>n;
     int count=0;
     for(int i=0;i<n;i++){
        if(isprime(i)){
            ++count;

        }
    }
    cout<<"total number of prime number lay betwen 0 and n is :"<<count<<endl;
     
return 0;
}