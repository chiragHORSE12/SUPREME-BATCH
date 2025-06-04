#include<iostream>
#include<string.h>
using namespace std;
int getlength(char ch[]){
    int length=0;
    int i=0;
    while(ch[i] != '\0')
    {
        i++;
    }
    return i;
}
void replace(char sen[]){
    int l=getlength(sen);
    for(int i=0;i<l;i++){
        if(sen[i]==' '){
            sen[i]='$';
        }
        if(sen[i]=='a'){
            sen[i]='@';
        }
    }
    cout<<endl<<"replace string is:";
    cout<<sen;
}

int main(){
    char sen[100];
    cout<<" enter the sentence :";
    cin.getline(sen,100);
    cout<<endl<<"enterd string is:"<<sen;
    replace(sen);
    
    return 0;
}