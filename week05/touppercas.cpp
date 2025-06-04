#include<iostream>
#include<string.h>
using namespace std;
int len(char ch[]){
    int i=0;
    while(ch[i]!=0){
        i++;
    }
    return i;
}
void convertintouppercase(char ch[]){
    int l=len(ch);
    cout<<l;
    for(int i=0;i<l;i++){
        ch[i]=ch[i]-'a'+'A';
  }
  cout<<endl<<ch;
  
}


int main(){
    char ch[100];
    cout<<"enter your string :";
    cin.getline(ch,100);
    convertintouppercase(ch);
    return 0;
}