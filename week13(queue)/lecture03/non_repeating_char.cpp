#include<iostream>
#include<queue>
using namespace std;

int main(){
    string a="zarcaaazrd";
    int freq[26]={0};
    string ans=" ";
    queue<char> q;

    for(int i=0;i<a.length();i++){
        char ch=a[i];

        //increment frequency 
        freq[ch-'a']++;

        //push that value 
        q.push(ch);

        while(! q.empty()){
            if(freq[q.front()-'a'] > 1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    cout<<"final string is:"<<ans<<endl;
    return 0;
}
