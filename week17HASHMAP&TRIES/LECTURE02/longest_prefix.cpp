#include <iostream>
#include<vector>
using namespace std;

class tries{
    public:
    char data;
    tries* children[26];
    bool isterminal;
    int childcount=0;

    tries(char c){
        data=c;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        this->isterminal=false;
    }
};

void insertword(tries* root,string word){
    //base case 
   // cout<<"inserting word "<<word<<endl;
    if(word.length() == 0){
        root->isterminal=true;
        return;
    }

    char ch=word[0];
    int index=ch-'a';
    tries* child;
//present
    if(root->children[index]!= NULL){
        child=root->children[index];
    }
    else{
        child=new tries(ch);
        root->childcount++;
        root->children[index]=child;
        
    }
    insertword(child,word.substr(1));
}

void findlcp(string first,string& ans,tries* root){
    for(int i=0;i<first.length();i++){
        char ch=first[i];
        if(root ->childcount ==1){
            ans.push_back(ch);
            int index=ch-'a';
            root=root->children[index];
        }
        else{
            break;
        }
        if(root->isterminal)
            break;
        }
}

string longestcommonprefix(vector <string> strs){
    tries* root=new tries('_');
    //inserting string
    for (int i=0;i<strs.size();i++){
        insertword(root,strs[i]);
    }
    
    string ans="";
    string first=strs[0];
    findlcp(first,ans,root);
    return ans;   
}


int main(){
    tries* root=new tries('_');
   // insert(root,codehelp);
   vector<string> str{"code","codehelp","coding","codewithharry","coder"};
   string ans=longestcommonprefix(str);
   cout<<"longest common prefix is "<<ans<<endl;
   return 0;
}