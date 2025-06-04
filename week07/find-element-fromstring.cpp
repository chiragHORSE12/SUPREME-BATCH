#include<iostream>
#include<string>
using namespace std;

int  findelement(string str,int i,int n ,char key){

    if(i>=n){
        return -1;
        //element not found
    }
    //ek case solve ksr do bhai bas 
    if(str[i]==key){
        return i+1;
    }
    return findelement(str,i+1,n,key);

}
int main(){
    string str;
    cout<<"enter your string ";
    getline(cin,str);
    int i=0;
    int n=str.length();
    char key='g';

    int  ans=findelement(str,i,n,key);
    
    cout<<"element is present:"<<" "<<ans;
    
    return 0;


}