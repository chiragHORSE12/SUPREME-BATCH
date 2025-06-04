#include<iostream>
#include<vector>
using namespace std;

int len_long_subseq(string s1,string s2,int i,int j){
    //base case
    if( i >= s1.length()){
        return 0;
    }
    if(i >= s2.length()){
        return 0;
    }

    int count=0;

    if(s1[i] == s2[j]){
        count=1+len_long_subseq(s1,s2,i+1,j+1);
    }
    else{
        count=0+max(len_long_subseq(s1,s2,i+1,j),len_long_subseq(s1,s2,i,j+1));
    }
    return count;
}

int main(){
    string s1="abcde";
    string s2="ace";
    int i=0;
    int j=0;
    int ans=len_long_subseq(s1,s2,i,j);
    cout<<"length of longest common subsequence is : "<<ans<<endl;
    return 0;
}