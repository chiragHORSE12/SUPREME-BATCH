#include<iostream>
#include<vector>
using namespace std;
string LongestCommonPrefix(vector<string>& arr){

    string ans="";
    for(int i=0;i<arr[0].length();i++){
        char ch=arr[0][i];
        bool match =true;
        for(int j=1;j<arr.size();j++){
            //matching 
            if(ch != arr[j][i]){
                match=false;
                break;
            }
        }
        if(match == false){
            break;
        }
        else{
            ans +=ch;
        }
    }
    return ans;
}

int main(){
    vector <string> arr ={"code","coding","codehelp"};
    string ans=LongestCommonPrefix(arr);
    cout<<"longest common prefix is :"<<ans<<endl;
    return 0;
}