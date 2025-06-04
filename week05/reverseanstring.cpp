#include<iostream>
#include<string.h>
using namespace std;
int length(char ch[]){
    int l=0;
    int i=0;
    while(ch[i]!='\0'){
        i++;
    }
    return i;

}

void reverse( char ch[]){
    int i=0;
    int l=length(ch);
    int j=l-1;
    
    while(i<=j){
        char temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    cout<<" string after reverse:";
    cout<<ch;
}
int main(){
    char ch[100];
    cout<<" enter the element of string :";
    cin.getline(ch,100);
    cout<<"string before reverse :";
    cout<<ch;
    reverse(ch);
    return 0;

}