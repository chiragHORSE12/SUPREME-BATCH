#include<iostream>
using namespace std;

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

bool search(tries* root,string word){
    //base case 
    if (word.size()==0){
        return root->isterminal;
    }

    char ch=word[0];
    int index=ch-'A';
    tries* child;
    //present
    if(root->children[index]!= NULL){
        child=root->children[index];
    }
    else{
        return false;
    }
    search(root,word.substr(1));

}

void insertword(tries* root,string word){
    //base case 
    cout<<"inserting word "<<word<<endl;
    if(word.length() == 0){
        root->isterminal=true;
        return;
    }

    char ch=word[0];
    int index=ch-'A';
    tries* child;
//present
    if(root->children[index]!= NULL){
        child=root->children[index];
    }
    else{
        child=new tries(ch);
        root->children[index]=child;
    }
    insertword(child,word.substr(1));
}

int main(){
    tries* root =new tries('-');
    insertword(root,"CODING");
    bool z= search(root,"CDING");
    cout<<"CDING is presnt :"<<z<<endl;
return 0;
}