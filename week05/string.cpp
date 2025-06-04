#include<iostream>
#include<string.h>
using namespace std;

int main(){
    //declare string
    string str;
    cout<<"enter the string ";
    //user input into string
    getline(cin,str);
    cout<<str<<endl;
    //length fubnction is generally used for finding length of string
    cout<<"LENGTH OF STRING IS :"<<str.length()<<endl;
    
    cout<<"string is empty:"<<str.empty()<<endl; 
    str.push_back('a');
    cout<<"new string: "<<str<<endl;
    str.pop_back();
    cout<<"new string after pop"<<str<<endl;
    cout<<"sub string is:"<<str.substr(0,4)<<endl;

    
    string str1;
    cout<<"enter your str1 string:";
    getline(cin,str1);
    if(str.compare(str1)==0){
        cout<<"string is equal "<<endl;
    }
    else{
        cout<<"string is not equal "<<endl;
    }
    //find function to find specific value in the string
    string s="her i am sharing your ppt which is important for exam";
    string j="important";
    cout<<s.find(j)<<endl;
    //replace function is generally used for relace any place of string with new string 
    string k="mostimportant";
    cout<<s.replace(35,9,k)<<endl;
    return 0;

}
