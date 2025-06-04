#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool> Sieve(int n){
    vector <bool>sieve(n+1,true);
        sieve[0]=sieve[1]=false;
        int m=sqrt(n);

        for(int i=2;i<=m;i++){
            if(sieve[i]==true){
                int j=i*i;
                 while(j<=n){

                 sieve[j]=false;
                  j=j+i;
                 }
            }
        }
        return sieve;
    }

int main(){
    vector <bool> sieve=Sieve(60);
    for(int i=2;i<=60;i++){
        if(sieve[i]==true ){
            cout<<i<<endl;
        }

    }
    return 0;
}


