#include<iostream>
#include<string>
using namespace std;
void remove_substring(string str,string sub_string,int n){
    int pos=str.find(sub_string);
    while(pos!=string::npos){
        str.erase(pos,n);
        pos=str.find(sub_string);
        }
        cout<<str;

}

int main(){
    string str;
    cout<<"Enter your string:";
    getline(cin,str);
    string sub_string;
    cout<<"enter your sub string:";
    getline(cin,sub_string);
    int n=sub_string.length();
    remove_substring(str,sub_string,n);
    return 0;
}