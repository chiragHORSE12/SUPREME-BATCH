#include<iostream>
using namespace std;
int expo(int x,int y){
    int ans=1;
    for(int i=0;i<y;i++){
        ans=ans*x;
    }
    return ans;
}

void expon(int a,int b){
    int ans=1;
    while(b > 0){
        if(b == 1){
            //odd
            ans = ans * a;
        }
         a= a*a;
         b>>=1;
        cout<<ans;
    }
}
//here time complexcity is is o(y)

int main(){
    expon(2,4);
    // int a;   
    // int b;
    // cout<<"enter the value of a and b:"<<endl;
    // cin>>a;
    // cin>>b;
    // int z=expo(a,b);
    // cout<<"answer is:"<<z;
    return 0;
}