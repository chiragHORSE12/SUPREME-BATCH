#include<iostream>
#include<string>
#include<vector>
using namespace std;

int expendoverindex(string str,int i,int j){
    int sub=0;
    //check palindrone sub string 
    while(i >= 0 && j<str.length() && str[i]==str[j]){
        i--;
        j++;
        sub++;
        expendoverindex(str,i,j);
        
    }
    return sub;
   
}
    int countsubstring(string str){
        //count number of substring of the string entered
        int n=str.length();
        vector <string> arr;
        int count=0;
        for(int i=0;i<n;i++){
            //odd substring
            int odd_answer=expendoverindex(str,i,i);
             count=count + odd_answer;
             
            //even substring
            int even_answer=expendoverindex(str,i,i+1);
            count=count+even_answer;
        }
        return count;
    }


int main(){
    string str;
    cout<<"enter your string :";
    getline(cin,str);
    int a=countsubstring(str);
    cout<<"total number of palindrone substring is: "<<a;

    return 0;
}