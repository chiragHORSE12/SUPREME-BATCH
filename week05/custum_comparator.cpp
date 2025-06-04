#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool cstm( char first,char second){
    // cout<<"first value is :"<<first <<endl;
    // cout<<"second value is :"<<second<<endl;
    return first>second;
}
int main(){
    // string str;
    // cout<<"enter your string :";
    // getline(cin,str);
    // sort(str.begin(),str.end(),cstm);
    // cout<<str<<endl;
    // string arr;
    // cout<<"enter your string :";
    // getline(cin,arr);
    // sort(arr.begin(),arr.end(),cstm);
    // cout<<arr<<endl;
    vector <int> v{1,3,2,4,6,5,7,8,6,7,6,9};
    
    sort(v.begin(),v.end(),cstm);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}