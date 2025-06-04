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
int main(){
    char ch[100];
    cout<<"enter the element :";
    cin.getline(ch,100);
    int ans=getlength(ch);
    cout<<"the length of the string is:"<<ans<<endl;
    return 0;

}
