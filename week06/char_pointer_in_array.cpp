#include<iostream>
using namespace std;

int main(){
    char ch[] = "chirag";
    char* c= ch ;
    cout<<c<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    cout<<&c<<endl;
    cout<<*c<<endl;
    cout<<*ch<<endl;

    //practise of char pointer in array

    cout<<*(ch+3)<<endl;
    cout<<*(c+3)<<endl;
    cout<<c+2<<endl;
    cout<<c+6<<endl;
    // special case
    char cha='k';
    char* cptr= &cha;
    cout<<cptr<<endl;
    //special case hjai
    char b[]="chiraG";
    cout<<b<<endl;

    char* pg="chiraG";
    cout<<pg<<endl;

    return 0;

} 