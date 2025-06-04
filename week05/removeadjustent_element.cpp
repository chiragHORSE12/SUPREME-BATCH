#include<iostream>
#include<string>
using namespace std;
void remove_duplicate(string str){
    string ans="";
    int i=0;
    while(i<=str.length()){
    if(ans.length()>0){
        if(ans[ans.length()-1]==str[i]){
            ans.pop_back();
            i++;
        }
        else{
            ans.push_back(str[i]);
            i++;
        }
    }
    else
    {
        ans.push_back(str[i]);
        i++;
    }
    
}
cout<<ans;    

}
int main(){

    string str;
    cout<<"enter your string:";
    getline(cin,str);
    remove_duplicate(str);
     
   return 0;
}