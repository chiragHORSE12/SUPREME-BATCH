#include<iostream>
#include<string>
#include<vector>
using namespace std;

int expendoverindex(string str,int left,int right){
    int sub=0;
    //check palindrone sub string 
    while(left >= 0 && right<str.length() && str[left]==str[right]){
        left--;
        right++;
        sub++;
        expendoverindex(str,left,right);
        
    }
    return sub;
   
}
    int countsubstring(string str){
        //count number of substring of the string entered
        int n=str.length();
        vector <string> arr;
        int count=0;
        for(int center =0;center<n;center++){
            //odd substring
            int odd_answer=expendoverindex(str,center,center);
             count=count + odd_answer;
             
            //even substring
            int even_answer=expendoverindex(str,center,center+1);
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