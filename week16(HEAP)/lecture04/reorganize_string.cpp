#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class node{
    public:
    char ch;
    int count;

    node(char c,int f){
        ch=c;
        count=f;
    }
};

class compare{
    public:

    bool operator()(node a,node b){
        return a.count <b.count;
    }
};

    string reorganizeString(string s) {
        //mapping the value
        int freq[26];

        for(int i=0;i < s.size();i++){
            char ch=s[i];
            freq[ch-'a']++;
        }
        priority_queue<node,vector<node>,compare> maxheap;

        for(int i=0;i<26;i++){
            if(freq[i] !=0){
                node temp(i+'a',freq[i]);
                maxheap.push(temp); 
            }
        }
        string ans="";
        if(maxheap.size() == 1){
            node temp=maxheap.top();
            maxheap.pop();
            if(temp.count == 1){
            ans +=temp.ch;
            temp.count--;
            }
        }
        
        while(maxheap.size() > 1){
            node first=maxheap.top();
            maxheap.pop();

            node second=maxheap.top();
            maxheap.pop();

            ans +=first.ch;
            ans +=second.ch;

            first.count--;
            second.count--;

            if(first.count !=0){
                maxheap.push(first);
            }
            if(second.count !=0 ){
                maxheap.push(second);
            }
            if(maxheap.size() ==1){
                node temp=maxheap.top();
                maxheap.pop();

                if(temp.count == 1){
                    ans +=temp.ch;
                    temp.count--;
                }
                else
                    return "";
            }
        }
        return ans;
}

int main(){
    string s="aab";
    string ans=reorganizeString(s);
    cout<<"reorganize string is : "<<ans<<endl;
    return 0;
}