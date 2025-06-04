#include<iostream>
using namespace std;

int opti(int n){
    int  var1=0;
    int  var2=1;
    int ans;
    //fat ne se bachane k leye
    if(n==0){
        return var1;
    }
    if(n==1){
        return var2;
    }
    
    for(int i=2;i<=n;i++){
        ans=var1 +var2;

        var1=var2;
        var2=ans;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int ans=opti(n);
    cout<<ans<<endl;
    return 0;
}