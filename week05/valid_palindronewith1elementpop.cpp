#include<iostream>
# include<string>
using namespace std;
bool check_palindrone(string str,int i,int j){
    if(str[i]!=str[j]){
    return false;
    }
    else{
        i++;
        j--;
    } 
    
return true;
}
bool valid_palindrone(string str){
    int i=0;
    int j=str.length()-1;

    while(i<=j){
        if(str[i]!=str[j]){
             return check_palindrone(str,i+1,j)||check_palindrone(str,i,j-1);
        }
        else{
            i++;
            j--; 
        }
    return true;
    }
}

int main(){
    string str;
    cout<<"enter your string";
    getline(cin,str);
    bool a=valid_palindrone(str);
    cout<<"the enterd string is palindrone after removing one element:";
    cout<<a;
    return 0;
}