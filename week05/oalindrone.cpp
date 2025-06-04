#include<iostream>
#include<string.h>
using namespace std;
int length(char ch[]){
    int i=0;
    while(ch[i]!=0){
        i++;
    }
    return i;
}
bool checkpalindrone(char ch[]){
    int l=length(ch);
    int i=0;
    int j=l-1;
    while(i<=j){
        if(ch[i]!=ch[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;

}


int main(){
    char ch[100];
    cout<<"enter the value of string :";
    cout<<endl;
    cin.getline(ch,100);
    bool ans=checkpalindrone(ch);
    cout<<"the entered sring is palindrone:"<<ans<<endl;
    return 0;
}