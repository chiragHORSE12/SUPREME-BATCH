#include<iostream>
#include<vector>
using namespace  std;

class tries{
    public:
    char data;
    tries* children[26];
    bool isterminal;
    

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
    //cout<<"inserting word "<<word<<endl;
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
        //root->childcount++;
        root->children[index]=child;
        
    }
    insertword(child,word.substr(1));
}  


void storesugest(vector<string> &temp,tries* curr,string prefix){
    cout<<"sugest"<<endl;
    if(curr->isterminal){
        temp.push_back(prefix);
    }
    // a-z tak check karna pageda 
    for(char ch='a';ch<='z';ch++){
        int index=ch-'a';

        tries* next=curr->children[index];

        if(curr !=NULL){
            prefix.push_back(ch);
            //recursive call
            storesugest(temp,next,prefix);
            //backtrack
            prefix.pop_back();
        }

    }
}
vector<vector<string>> get_suggestion(tries* root,string input){

    // variable/data structure
    tries* prev=root;
    vector<vector<string>> output;
    string prefix="";
    cout<<"store sugest "<<endl;

    for(int i=0;i<input.length();i++){
        //last character nikal leya h 
        char ch=input[i];

        //last character ka index nikala h
        int index=ch-'a';

        //current node find kara h
        tries* curr=prev->children[index];
        //check keya h k khale h ya nhi
        if(curr == NULL)
            break;
        else{
            //suggested string jo hoge vo batayege/store kara lenge
            vector<string> temp;
            prefix.push_back(ch);
            //last character ko prefix m dala h
            storesugest(temp,curr,prefix);
            output.push_back(temp);

            //update
            prev=curr;
        }
    }
    return output;
}

int main(){
    vector<string> v;
    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("lane");
    v.push_back("lord");
    v.push_back("last");
    
    string input="lovi";
    
    tries* root=new tries('-');

    for(int i=0;i<v.size();i++){
        insertword(root,v[i]);
    }
    
    vector<vector<string>> ans=get_suggestion(root,input);
    cout<<"printing the answer :"<<endl;
    for(int i=0;i<ans.size();i++){

        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<",";
        }
    cout<<endl;
    }
return 0;
}
