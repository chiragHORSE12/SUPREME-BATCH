#include<iostream>
using namespace std;
int length(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    return i;
}
void touppercase(char ch[]){
    int l=length(ch);
    for(int i=0;i<l;i++){
        if(ch[i]<'A'|ch[i]>'Z'){
            ch[i]=ch[i]-'a'+'A';
        }
    }
    cout<<ch;
}

int main(){
    char ch[100];
    cout<<"enter your string :";
    cin.getline(ch,100);
    touppercase(ch);
    return 0;
}