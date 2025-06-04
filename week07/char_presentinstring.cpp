#include<iostream>
#include<string>
#include<vector>
using namespace std;
void findelement(string str,int i,int n ,char key,vector <int> &arr,int &count){

    if(i>=n){
        return ;
        //element not found
    }
    //ek case solve ksr do bhai bas 
    if(str[i]==key){
        //insert element to another vactor
        arr.push_back(i);
        // print the index where element present
        cout<<"present at "<<i<<endl;
        //total occurance
        count++;
    }
    return findelement(str,i+1,n,key,arr,count);

}
int main(){
    string str;
    cout<<"enter your string ";
    getline(cin,str);
    int i=0;
    int n=str.length();
    char key='b';
    vector <int> arr;
    int count=0;
    findelement(str,i,n,key,arr,count);
    for(auto val:arr){
        cout<< val<<" ";
    }
   
    cout<<endl;
    cout<< "total occurance of key is : "<<count<<endl;
    
    return 0;


}