#include<iostream>
#include<queue>
using namespace std;

void solve(string a,string ans,int freq[],queue <char> q){
    for(int i=0;i<a.length();i++){
        char ch=a[i];

        //increment the count
        freq[ch-'a']++;
        //stack m dal do 
        q.push(ch);

        while(! q.empty()){
            //yade ocuurance 1 se jada bar hoga
            if(freq[ch-'a'] > 1){
                q.pop();
            }
            else{
                // yade 1 bar occurance h 
                //queue k front ko push kardo ans wali string m
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    cout<<"final ans string is :"<<ans<<endl;
}

int main(){
    string c="abbc";
    string ans=" ";
    queue <char> q;
    int freq[26]={0};

    solve(c,ans,freq,q);
    return 0;
}